#include <bits/stdc++.h>
using namespace std;

class DisjSet {
    int *rank, *parent, n;

public:

    DisjSet(int n)
    {
        rank = new int[n];
        parent = new int[n];
        this->n = n;
        makeSet();
    }

    void makeSet()
    {
        for (int i = 0; i < n; i++) {
            parent[i] = i;
        }
    }

    int find(int x)
    {

        if (parent[x] != x) {

            parent[x] = find(parent[x]);

        }

        return parent[x];
    }


    void Union(int x, int y)
    {
        int xset = find(x);
        int yset = find(y);

        if (xset == yset)
            return;


        if (rank[xset] < rank[yset]) {
            parent[xset] = yset;
        }
        else if (rank[xset] > rank[yset]) {
            parent[yset] = xset;
        }

        else {
            parent[yset] = xset;
            rank[xset] = rank[xset] + 1;
        }
    }
};

class Graph {
    vector<vector<int> > edgelist;
    int V;

public:
    Graph(int V) { this->V = V; }

    void addEdge(int x, int y, int w)
    {
        edgelist.push_back({ w, x, y });
    }

    void kruskals_mst()
    {
        sort(edgelist.begin(), edgelist.end());

        DisjSet s(V);
        int ans = 0;
        cout << "Following are the edges in the "
                "constructed MST"
             << endl;
        for (auto edge : edgelist) {
            int w = edge[0];
            int x = edge[1];
            int y = edge[2];


            if (s.find(x) != s.find(y)) {
                s.Union(x, y);
                ans += w;
                cout << x << " -- " << y << " == " << w
                     << endl;
            }
        }

        cout << "Minimum Cost Spanning Tree: " << ans;
    }
};

int main()
{
    Graph a(6);

    a.addEdge(0, 1, 6);
    a.addEdge(4, 2, 5);
    a.addEdge(5, 4, 5);
    a.addEdge(1, 4, 2);
    a.addEdge(3, 7, 7);
    a.addEdge(1, 4, 1);

    a.kruskals_mst();
    return 0;



}

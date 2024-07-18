#include <iostream>
using namespace std;

void move(int disks, int source=1, int auxiliary=2, int target=3)
{
    if (disks > 0)
    {

        move(disks - 1, source, target, auxiliary);

        cout << "Move disk " << disks << " from " << source << " —> "
             << target << endl;


        move(disks - 1, auxiliary, source, target);
    }
}

int main()
{
    int n = 3;
    move(n);

    return 0;
}

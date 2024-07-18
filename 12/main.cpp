
#include<bits/stdc++.h>

using namespace std;

bool areSame(int a[],int n)
{
	unordered_map<int,int> m;
	for(int i=0;i<n;i++)
	m[a[i]]++;

	if(m.size()==1)
	return true;
	else
	return false;
}

int main()
{
	int arr[]={2,2,1,2};


	int n=sizeof(arr)/sizeof(arr[0]);


	if(areSame(arr,n))
	cout<<"All Elements are Same";
	else
	cout<<"Not all Elements are Same";
}

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int v,k;
    cout<<"Enter the size of Array 1 and Array 2: "<<endl;
    cin>>v>>k;
    int arr1[v];
    int arr2[k];

    for(int i=0;i<v;i++){
        cout<<"Enter the element at : "<<i<<endl;
        cin>>arr1[i];
    }
    cout<<"Enter the second array elements:"<<endl;

     for(int i=0;i<k;i++){
        cout<<"Enter the element at : "<<i<<endl;
        cin>>arr2[i];
    }
    sort(arr1,arr1+v);
    sort(arr2,arr2+k);

    if(v != k){
        cout<<"Size of the arrays are not same,so : "<<endl;
    }


    for(int i=0;i<v;i++){
       if(arr1[i]==arr2[i]){
           cout<<"Both arrays have same element  "<<i<<" index"<<endl;
       }
       else{
           cout<<"This element which is not equal is at: "<<i<<" index"<<endl;
       }
    }
    return 0;
}

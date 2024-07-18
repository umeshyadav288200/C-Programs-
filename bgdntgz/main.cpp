#include<iostream>
using namespace std;

int main(){
    int x[5];
    int y[10];
    int sum = 0;
    int negativesum = 0;
    int j = 0;
    for(int i = 0; i<10; i++){
        cin>>y[i];
    }
    cout<< "The wrestlers that have been are selected"<<endl;
    for(int i = 0; i<10; i++){
        if(y[i]<0){
                x[j] = (65 - y[i]);
                cout<<x[j]<< ",";
                negativesum = negativesum + y[i];
                j++;
        }
        else if(y[i]>0){
                sum = sum + y[i];
        }
    }
    cout<<endl;
    cout<<"+ve height sum = "<< sum <<endl;
    cout<<"-ve height sum = "<< negativesum <<endl;
}

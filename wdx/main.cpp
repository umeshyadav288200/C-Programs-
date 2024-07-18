#include <iostream>

using namespace std;

void time(int hh,int mm ,int ss){
    cout<<"Time:hh:mm:ss: "<<hh<<" "<<mm<<" "<<ss<<endl;
    if(hh>23){
        cout<<"wrong output in hours :"<<endl;
    }
     if(mm>59){
        cout<<" wrong output in minutes: "<<endl;
    }
    if(ss>59){
        cout<<"wrong output in seconds: "<<endl;
    }

}
int main()
{
    cout<<"enter time in hh: mm: ss: "<<endl;
    int hh,mm,ss;
    cin>>hh>>mm>>ss;
   time(hh,mm,ss);

    return 0;
}

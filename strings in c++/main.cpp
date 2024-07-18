#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name= "anil";
    string lastname = " yadav";
    string fullname;
    fullname = name +" "+lastname;
    if(name == "anil"){
        cout << "name matched" << endl;

    }else{
    cout << "name mismatch" << endl;
    }

    cout << name << " "<< lastname<<endl << fullname<<endl;

    return 0;
}

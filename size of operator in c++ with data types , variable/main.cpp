#include <iostream>

using namespace std;

struct student{
   int rollno;
   char sex;


};

int main()
{    int age;
    cout << "int --> " << sizeof(age)<< endl;
    cout << "short int --> " << sizeof(short int)<< endl;
    cout << "float --> " << sizeof(float)<< endl;
    cout << "struct student --> " << sizeof(student)<< endl;
    return 0;
}

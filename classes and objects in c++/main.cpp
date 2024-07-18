#include <iostream>

using namespace std;

class Employee
{
private:
    int a,b,c;

public:
    int d,e;
    void setData(int a,int b,int c); //declaration
    void getData(){
       cout << "THE value of a is:"<< a <<endl;
       cout << "THE value of b is:"<< b <<endl;
       cout << "THE value of c is:"<< c <<endl;
       cout << "THE value of d is:"<< d <<endl;
       cout << "THE value of e is:"<< e <<endl;

    }


};

void Employee :: setData(int a1,int b1,int c1){
    a = a1;
    b = b1;
    c = c1;

}

int main()
{
     Employee harry;
     //harry.a =78; as a is private  it will give an error
     harry.e = 34;
     harry.d = 45;
     harry.setData(1,2,4);
     harry.getData();
    return 0;
}

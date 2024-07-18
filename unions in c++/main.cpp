#include <iostream>

using namespace std;

union emp{
   int id;
   float salary;




};

int main()
{

    emp rahul,anil;
    rahul.id = 25;
    rahul.salary = 10000;

    cout << rahul.id << endl;
    cout << rahul.salary << endl;

    return 0;
}

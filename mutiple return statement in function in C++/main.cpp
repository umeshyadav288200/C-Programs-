#include <iostream>

using namespace std;

bool check(int);


int main()
{
    if(check(16))
    cout << " u are a adult";
    else
        cout << "u are a kid";
    return 0;
}

bool check(int age){

   if( age >=18)
    return true;
   else
    return false;


}

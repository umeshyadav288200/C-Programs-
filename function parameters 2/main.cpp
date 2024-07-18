#include <iostream>

using namespace std;
int display(int,int);

int main()
{   int result;
    result = display(20,30);
    cout << "the result is :" << result << endl;
    return 0;
}

int display(int a, int b){

     cout << a <<endl;
    cout << b <<endl;

    return a+b;

}

#include <iostream>

using namespace std;

int main()
{
    int num1;
    int num2;
    int temp;

    cout << "enter number 1";
    cin >> num1;
    cout << "enter number 2";
    cin >> num2;

    temp = num1;
    num1=num2;
    num2=temp;

    cout << "value after swaping of num1 "<<num1 <<endl;
    cout << "value after swaping of num2"<<num2 <<endl;

    return 0;
}

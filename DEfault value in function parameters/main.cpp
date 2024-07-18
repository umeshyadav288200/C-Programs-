#include <iostream>

using namespace std;
// passing default  value to third para meter
//always take defalut value to last variable
void display(int x, int y , int z=10){
    cout << "x ix" << x << endl;
    cout << "y ix" << y << endl;
    cout << "z ix" << z << endl;
}

int main()
{ // if we do not give value of third parameter it will take the default value that is ten
    display(30,20);

    return 0;
}

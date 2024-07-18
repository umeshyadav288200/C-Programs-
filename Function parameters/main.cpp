#include <iostream>

using namespace std;
float display(float,float);

float main()
{    float result;
    result = display(20,30.3);
    cout << "the result is :" << result << endl;
    return 0;
}

float display(float a, float b){

     cout << a <<endl;
    cout << b <<endl;
    return a + b;

}

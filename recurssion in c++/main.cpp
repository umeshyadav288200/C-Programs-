#include <iostream>

using namespace std;
int factorial(int n);
int main()
{
    cout <<  factorial(6);
    return 0;
}
int factorial(int n){     // recurision function are those which called itself

    if (n==1){
    return 1;



    }else{
    return n*factorial(n-1);

    }



}

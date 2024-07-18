#include <iostream>

using namespace std;

void display(const int *start, const int *end);


int main()
{
    int numbers[]= {65,96,86,75,96,46,95,63,39 };
    display( numbers,numbers+9);
    display( numbers,numbers+8);
    display( numbers,numbers+7);
    display( numbers,numbers+6);
    display( numbers,numbers+5);
    display( numbers,numbers+4);
    return 0;
}


void display(const int *start, const int *end){

      const int *ptr;
    for(ptr = start; ptr != end ; ptr++){

        cout << *ptr << endl;
    }

}

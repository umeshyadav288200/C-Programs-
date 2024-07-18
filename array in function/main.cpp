#include <iostream>

using namespace std;

void show(int[], int);

int main()
{
    int numbers[] = {20,20,30,60,60};  //array
    int length = 5;
    show(numbers,length);
    return 0;
}

void show(int numbers[],int length){

for(int counter=0;counter<length;counter++){    //function

    cout << numbers[counter]<<endl;
}


}

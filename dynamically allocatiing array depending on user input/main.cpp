#include <iostream>

using namespace std;

int main()
{
    int *pointer = NULL;
    cout << "how many numbers u gonna enter"<<endl;
    int input;
    cin >> input;

    pointer = new int(input);

    int temp;


    for( int counter =0 ; counter < input ; counter ++){
       cout << " enter the first number"<< counter+1<<endl;

       cin >> temp;
       *(pointer+counter) = temp;

    }
     cout << "  the  number u enter are "<< endl;
    for( int counter = 0 ; counter < input ; counter ++){
    cout << counter+" the items are "<< *(pointer+counter) <<endl;


    }

    delete []pointer;
    return 0;
}

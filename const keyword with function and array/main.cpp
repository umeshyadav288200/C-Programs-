#include <iostream>

using namespace std;

void display(const int num[],int limit );


int main()
{
    int number[5]={22,60,90,96,45};
    display(number,5);
    return 0;
}
void display(const int num[],int limit ){

   for( int counter = 0; counter < limit; counter++){

    cout << num[counter] << endl;
    num[counter] = 22; //its an error because we use const keyword for num
   }


}

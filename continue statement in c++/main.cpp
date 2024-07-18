#include <iostream>

using namespace std;

int main()
{
     int counter;
     for(counter=1 ; counter<=10; counter++){

//continue statement is used in loop to skip the current ilteration and continue with next iilteration
        if(counter==5){
            continue; }
 cout << counter << endl;
     }
    return 0;
}

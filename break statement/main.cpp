#include <iostream>

using namespace std;
//it is used to terminate a loop
int main()
{
    int counter;
    for( counter =1; counter <=5 ; counter++){

        int innercounter;
        for(innercounter=1;innercounter <=3; innercounter++){

            cout << innercounter <<endl;
            if (innercounter == 2)
                break;
        }



    }
    return 0;
}

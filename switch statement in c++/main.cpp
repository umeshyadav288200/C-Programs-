#include <iostream>

using namespace std;
// switch(expression){

//case1:{
//statement

//}
//default : {statement}


//}
int main()
{
    char input ;
    cout << "dal de grade"<<endl;
    cin >> input;

    switch (input){

        case 'A': {
        cout << "bhai man ga ";
        break;
        }
          case 'B': {
        cout << "TU MST HA ";
        break;
        }
          case 'C': {
        cout << "bhaI TU BHI THK HA ";
        break;
        }
          case 'D': {
        cout << "CHL YHA T ";
        break;
        }

          default :{
          cout << endl << "are dhng t dal";

          }









    }
    return 0;
}

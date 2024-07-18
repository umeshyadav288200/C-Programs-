 // oop  classes and objects
    // class --> extension pf structures in (c)
    // structures had limitation
    //    - members are public
    //     - No methods
    // classes --> structures + more
    // classes --> can have methods and properties
    // classes --> can make few members as private and few as public
    // structures in c++ are typedef
    // you can declare along with clsass declaration like this

    //class Enployee {
     // class definition

    //}harry , rohan; */


    //Nesting of members function


#include <iostream>

using namespace std;


class binary {
    string s;
public:
    void read(void);
    void chk_bin(void);
    void ones_complement(void);
    void display(void);
    };

    void binary::read(void){


    cout<< " Enter the binary number:"<< endl;
    cin >> s;
    }


    void binary :: chk_bin(void){

    for(int i = 0; i < s.length(); i++){

        if( s.at(i)!='0' && s.at(i)!= '1' ){

            cout << "incorrect binary number"<<endl;
            exit(0);


        }
    }

    }
    void binary :: ones_complement(void){


    for(int i = 0; i < s.length(); i++){

        if( s.at(i) == '0')
        {

            s.at(i) = '1';

        }else{

        s.at(i)= '0';

        }

    }



    }


     void binary :: display(void){

     cout << "dispalying ur binary function"<<endl;
      for(int i = 0; i < s.length(); i++){

        cout << s.at(i);

      }
     cout << endl;
     }






int main()
{
   binary b;
   b.read();
   b.chk_bin();
   b.display();
   b.ones_complement();
   b.display();






    return 0;
}

#include <iostream>

using namespace std;

struct address{

int house_no;
string street_name;

};

struct student{

   string name;
   int rollno;
   address addy;   // nested structure or we can say structure inside another sturucture



};


int main()
{
    student rahul;

    rahul.name = "rahul";
    rahul.rollno = 5623;
    rahul.addy.house_no = 86;
    rahul.addy.street_name = "pataudi road";

    cout << rahul.name << endl;
    cout << rahul.rollno << endl;
    cout << rahul.addy.house_no << endl;
    cout << rahul.addy.street_name << endl;


    return 0;
}

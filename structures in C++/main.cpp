#include <iostream>

using namespace std;

 struct student{
    int rollno;
    char sex;
 }rahul,adi,chun;



int main()
{
    student rahul,adi,chun;

    rahul.rollno = 5262;
    rahul.sex = 'm';

    adi.rollno = 5263;           //use dot operator to acces structures
    adi.sex = 'm';

    chun.rollno = 5264;
    chun.sex = 'f';

    cout << rahul.rollno << endl << rahul.sex << endl;

    return 0;
}

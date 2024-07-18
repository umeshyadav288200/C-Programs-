#include <iostream>

using namespace std;


struct student{

    int rollno;
    char sex;


};

int main()
{
      student anil;
      student *anilptr;

      anilptr = &anil;

      anil.rollno = 5262;
      anilptr->sex = 'm';

      cout << anilptr->sex << endl;
      cout << anil.rollno << endl;




    return 0;
}

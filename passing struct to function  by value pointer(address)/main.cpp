#include <iostream>

using namespace std;

struct student{
    int rollno;
    char sex;
    int age;

};

void display(student s);
void show( student *s);
int main()
{
    student rahul = {256,'m',25};
        show(&rahul);
         cout << endl;

    display(rahul);






    return 0;
}

void display(student s){

   cout << s.rollno << endl;
   cout << s.sex << endl;
   cout << s.age << endl;
   s.age = 0000;
}

void show( student *s){

   cout << s->rollno << endl;
   cout << s->sex << endl;
   cout << s->age << endl;
   s->rollno = 0000;

}

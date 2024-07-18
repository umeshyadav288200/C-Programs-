#include <iostream>

using namespace std;

class animal
{
private:
    char dog,cat;
public:
    char elephant,lion;

    void setdata(char dog , char cat);
    void getdata(){

    cout << "the first animal is: " << dog << endl;
    cout << "the second animal is: " << cat << endl;
    cout << "the third animal is: " << elephant << endl;
    cout << "the fourth animal is: " << lion << endl;

    }
};

void animal :: setdata(char dog1 , char cat1){

     dog = dog1;
     cat = cat1;


}






int main()
{
    animal jungle;
    jungle.elephant = 1;
    jungle.lion = 2;
    jungle.setdata(2, 4 );
    jungle.getdata();

    return 0;
}

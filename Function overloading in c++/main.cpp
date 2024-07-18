#include <iostream>
#include <string>

using namespace std;
void display();
void display(string);
int main()
{
    display();
    display("anil");
    return 0;
}
void display(){

cout << "hi whats up"<<endl;
}
void display(string name){

cout << "hi whats up" << "\t" << name <<endl;       // function overloading is that calling same function with different parameters for example calling display function with null and string parameters
}

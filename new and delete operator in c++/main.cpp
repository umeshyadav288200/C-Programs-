#include <iostream>

using namespace std;

int main()
{
   int *pointer;

   pointer = new int; // to store the memory dynamically from new keyword

   *pointer = 34;

   cout << *pointer << endl ;

   delete pointer; // to delete memory stored in memory location

  return 0;
}

#include <iostream>
#include "List.h"

using namespace std;

int main()
{

     List L1, L2; //creating list L1 and L2

   L1.insert(9, 1); //inserting 3 elements to list L1
   L1.insert(4, 1);
   L1.insert(2, 1);
   L1.remove(2); //removing one of the elements from list L1

   L2.insert(8, 1); //inserting 3 elements to list L2
   L2.insert(3, 1);
   L2.insert(6, 1);
   L2.remove(1); //removing on of the elements from list L2

   cout << "List L1" << endl; //printing the elements of list L1
   cout << "element 1 = " << L1.getData(1) << " element 2 = " << L1.getData(2) << endl;

   cout << "List L2" << endl; //printing the elements of list L2
   cout << "element 1 = " << L2.getData(1) << " element 2 = " << L2.getData(2) << endl;

   return 0;

}

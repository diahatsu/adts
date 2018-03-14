#include <iostream>
#include "List.h"

using namespace std;

int main()
{

     List L1, L2;

 //Do some stuff with L1, L2, ...
 // ...
   L1.insert(9, 1);
   L1.insert(4, 1);
   L1.insert(2, 1);

   cout << L1.getData(1) << L1.getData(2) << L1.getData(3) << endl;

   return 0;

}

#include "StackL.h"

int Stack::size() //return the size of the data vector
{
   return data.size();
}

void Stack::push(int i) //put new value into vector
{
   data.insert(i,1);
}

void Stack::pop() //remove last value from vector
{
   data.remove(1);
}

int Stack::top() //return the last value from vector
{
   return data.getData(1);
}

void Stack::clear() //delete the vector
{
   for(unsigned int i = 0 ; i < data.size() ; i++)
   {
      data.remove(1);
   }
}

#include "StackV.h"
#include <vector>

int Stack::size() //return the size of the data vector
{
   return data.size();
}

void Stack::push(int n) //put new value into vector
{
   data.push_back(n);
}

void Stack::pop() //remove last value from vector
{
   data.pop_back();
}

int Stack::top() //return the last value of vector
{
  return data[data.size()-1];
}

void Stack::clear() //delete the vector
{
   for(int i = 0 ; i < data.size() ; i++)
   {
   data.pop_back();
   }
}

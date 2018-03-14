#include "StackV.h"
#include <vector>

int Stack::size()
{
   return data.size();
}

void Stack::push(int n)
{
   data.push_back(n);
}

void Stack::pop()
{
   data.pop_back();
}

int Stack::top()
{
  return data[data.size()-1];
}

void Stack::clear()
{
   for(int i = 0 ; i < data.size() ; i++)
   {
   data.pop_back();
   }
}

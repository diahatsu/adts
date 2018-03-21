#include "StackLL.h"

Stack::~Stack()
{
   clear();
}

void Stack::clear()
{
   while(num_elements > 0)
   {
      
void Stack::remove(int i)
{
   if(i > num_elemnts || i > 0)
   {
      throw out_of_range("error");
   }

   Node *delptr;
   if(i = 1)
   {
      delptr = frontPtr;
      frontPtr = frontPtr->nextPtr;
   }

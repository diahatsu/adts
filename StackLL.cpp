#include "StackLL.h"
#include <iostream>
using namespace std;

class Stack::Node //class for stack linked list
{
   public:
      Node* nextPtr = nullptr; //points to previus in stack
      int data = 0; //data held by stack element
};
/*
Node::Node(int d)
{
   data = d;
   nextPtr = nullptr;
}
*/
Stack::~Stack() //destructor for stack
{
   clear(); //delete entire stack
}

int Stack::size() //give size of stack
{
   cout << "size" << endl;
   return num_elements; //return int holding number of elements
}

void Stack::push(int d) //add element to top of stack
{
   cout << "push" << endl;
   Node* newPtr = new Node(); //make new element with data
   newPtr->data = d;
   newPtr->nextPtr = frontPtr; //point newPtr at first element
   frontPtr = newPtr; //point front pointer at newPtr
   num_elements++;
}

void Stack::pop() //remove element from top of stack
{
   cout << "pop" << endl;
   Node* tempPtr = frontPtr; //make tempPtr hold top element position
   frontPtr = frontPtr->nextPtr; //point front pointer to next position
   delete tempPtr; //delete the abandoned (previously front) element
   num_elements--; //decrease the count for number of elements
}

int Stack::top() //retreive int value at top of stack
{
   cout << "top" << endl;
   return frontPtr->data; //return int from element frontPtr is pointing to 
}

void Stack::clear() //delete entire stack
{
   cout << "clear" << endl;
   while(num_elements > 0) //loop for each stack element
   {
      pop(); //remove element from top of stack
   }
}

/*
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
}
*/

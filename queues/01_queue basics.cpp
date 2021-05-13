//author :shreyamalogi

/*

queue data structure

stores a list of items which can be inserted at one end
and removed from the other end only

FIFO: first in first out
take 2 pointers front and back 

OPERATIONS: 

enqueue(x) 			similar to push , insert at back
dequeue() 			similar to pop   , remove from front
peek() 				what is the front value
empty()				is queue empty or not

IMPLEMENTATION: array implementation

//ENQUEUE
at first our front and back will be at starting that is -1
if any value is inserted then front and back both will be incremented
then if we insert one more value, then only back will move, but front wont

//DEQUEUE
back will point towards the last element 
and front will increment to one position forward i.e it will point to 2nd element
again if we dequeue then front moves forward


//PEEK
what is the cuurent value of our front

//EMPTY
count how many elements are present from front to back including front and back
when front is equal to to back then we still have one element
when we deque, our front moves more forward than back i.e
front>back = queue empty
*/


#include<bits/stdc++.h>

using namespace std;

int main()
{

     return 0;
}


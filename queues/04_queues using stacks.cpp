//author :shreyamalogi

/*
queues using stacks
approach: using 2 stacks and dequeue operation costly
approach 2: using function call

approach 1:
enqueue operation: 
push x to stack 1

dequeue operation:
if both stacks are empty then print error
if stack 2 is empty,stack 1 not empty, push everything
pop the element from stack 2 and return

*/

#include <iostream>
#include <stack>
using namespace std;

class que{

    stack<int> s1;
    stack<int> s2;

    public:

    void push(int x){
        s1.push(x);
    }

   int pop(){

        while(s1.empty() && s2.empty()){
            cout<<"Queue is empty"<<endl;
            return -1;
        }

        if(s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }
        int topvalue=s2.top();
        s2.pop();
        return topvalue;
    }

    bool empty(){
        if(s1.empty() && s2.empty()){
            return true;
        }
        return false;
    }
};

int main()
{

    que q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    while(!q.empty()){
        cout<<q.pop()<<endl;
    }
    
        return 0;
}



//
//1
//2
//3
//4

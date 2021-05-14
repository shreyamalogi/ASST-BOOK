//author :shreyamalogi

/*
linkedlist implimentation for queues

*/


#include<iostream>
using namespace std;

//class node
class node{
    public:
    int data;
    node* next;

    node( int val){
        data=val;
        next=NULL;
    }
};

//class queue
class queue{

    node* front;
    node* back;

    public:
    queue(){ //comstructor
        front=NULL;
        back=NULL;
    }

    void push(int x){

        node* n=new node(x);

        if(front==NULL){ //empty
            back=n;
            front=n;
            return;
        }
        back->next=n;
        back=n;
    }

    void pop(){
        if(front==NULL){
            cout<<"Queue underflow"<<endl;
            return;
        }
		//else
        node* todelete=front;
        front=front->next;

        delete todelete;
    }

    int peek(){
        if(front==NULL){
            cout<<"No element in queue"<<endl;
            return -1; //-1
        }

        return front->data;
    }

    bool empty(){
        if(front==NULL){
            return true; //1
        }
        return false; //0
    }
    
};

int main(){

    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();

    cout<<q.empty()<<endl;

   

    return 0;
}

//
//1
//2
//3
//4
//1

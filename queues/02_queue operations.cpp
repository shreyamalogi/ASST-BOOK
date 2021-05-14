//author :shreyamalogi

/*

array implimentation in queues with operations

*/


#include<iostream>
using namespace std;

#define n 20

class queue{
    int* arr;
    int front;
    int back;

    public:
    queue(){
        arr=new int[n];
        front=-1;
        back=-1;
    }
	
	//push
    void push(int x){

        if(back==n-1){
            cout<<"Queue overflow"<<endl;
            return;
        }
        //else
        back++;
        arr[back]=x;

        if(front==-1){
            front++;
        }
    }
    
	//pop
    void pop(){

        if(front==-1 || front>back){
            cout<<"No elements in queue"<<endl;
            return;
        }

        front++;
    }
	
	//peek int type ka
    int peek(){
        if(front==-1 || front>back){
            cout<<"No elements in queue"<<endl;
            return -1;
        }

        return arr[front];

    }
	//empty bool type ka
    bool empty(){
        if(front==-1 || front>back){
            return true;
        }
        return false;
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
	//check emp[ty
    cout<<q.empty()<<endl;

    return 0;
}

//
//1
//2
//3
//4
//1 yes it is empty


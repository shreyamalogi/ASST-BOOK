//author :shreyamalogi

/*

stack using queues making push costly
method 1
*/


#include<bits/stdc++.h>

using namespace std;

class Stack{
	int n;
	queue<int> q1;
	queue<int>q2;
	
	public:
		Stack(){
			n=0;
		}
		
		
		void push(int val){
			q2.push(val);
			n++;
			while(!q1.empty()){
				q2.push(q1.front());
				q1.pop();
			}
			
			queue<int> temp =q1;
			q1=q2;
			q2=temp;
		}
		
		
		void pop(){
				q1.pop();
				n--;
			}
			
		int top(){
				return q1.front();
			}
			
		int size(){
				return n;
			}
		
};

int main()
{
	Stack st;
	st.push(1);
	st.push(2);
	st.push(3);
	st.push(4);
	
	cout<<st.top()<<endl;
	st.pop();
	cout<<st.top()<<endl;
	st.pop();
	cout<<st.top()<<endl;
	st.pop();
	cout<<st.top()<<endl;
	st.pop();

	cout<<st.size()<<endl;
     return 0;
}


//
//4
//3
//2
//1
//0 //size

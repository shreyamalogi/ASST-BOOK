//author :shreyamalogi

/*
reverse a stack

because of lifo property
reverse a stack
stack concept using recursion
taking 2 stacks 

*/

#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int> &st, int ele){

    if(st.empty()){   //base case
        st.push(ele); //because vo sabse pehle chala jayega
        return;
    }

    int topele=st.top();
    st.pop();
    insertAtBottom(st,ele); //recursive call

    st.push(topele);
}

void reverse(stack<int> &st){

    if(st.empty()){		//base case
        return;
    }

    int ele=st.top();
    st.pop();
    reverse(st);
    insertAtBottom(st,ele);

}

int main(){

    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    reverse(st);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }cout<<endl;

}

//
//1 2 3 4

//4 3 2 1 this is orgibnal order

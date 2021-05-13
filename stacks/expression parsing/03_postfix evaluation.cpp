//author :shreyamalogi

/*
POSTFIX EXPRESSION EVALUATION
LIFO IN STACKS

tc: o(l) where l is the length of the string
same applies to prefix alsos

*/

#include<iostream>
#include<stack>
#include<math.h>
using namespace std;

int postfixEvaluation(string s){

    stack<int> st;

    for(int i=0;i<s.length();i++){  //traverse in forward directio ie...0 to length of the string

        if(s[i]>='0' && s[i]<='9'){
            st.push(s[i]-'0');  //0 KI ASCII VALUE we get as integer
        }
        else{
        	//first operand 2 then 1
            int op2=st.top();
            st.pop();
            int op1=st.top();
            st.pop();

            switch (s[i])
            {
            case '+':
                st.push(op1+op2);
                break;
            case '-':
                st.push(op1-op2);
                break;
            case '*':
                st.push(op1*op2);
                break;
            case '/':
                st.push(op1/op2);
                break;
            case '^':
                st.push(pow(op1,op2));
                break;
            }

        }
    }

    return st.top();
}

int main(){

    cout<<postfixEvaluation("46+2/5*7+")<<endl;
    return 0;
}
//"46+2/5*7+"
//32


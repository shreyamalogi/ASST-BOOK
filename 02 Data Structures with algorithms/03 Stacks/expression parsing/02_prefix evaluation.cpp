//author :shreyamalogi

//author :shreyamalogi

/*
prefix expression evaluation
stack and lifo property
start from the last of the string


first push the operands into the stack
then pop out and store it in 2 variables
operand 1 variable will have top of the stack...operand 2 will have bottom
then use operator, finally push a single leement into the stack

*/

#include<iostream>
#include<stack>
#include<math.h>
using namespace std;

int prefixEvaluation(string s){

    stack<int> st;

    for(int i=s.length()-1;i>=0;i--){		//as we are traversing from reverse

        if(s[i]>='0' && s[i]<='9'){			//to check if it an operand
            st.push(s[i]-'0');
        }
 		else{								//to check if it an operator
			int op1=st.top();				//operator 1 will be top of the stack
			st.pop();						//then remove it
			int op2=st.top();				//now the operator 2 will be top of the stack 
			st.pop();						//then remove this too

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
                st.push(pow(op1,op2));		//pow and ,
                break;
            }
        }
    }
    return st.top();//return our top element which will have only one value
}

int main(){

    cout<<prefixEvaluation("-+7*45+20")<<endl;	
    return 0;

}
//"-+7*45+20"

//25

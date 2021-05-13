//author :shreyamalogi

/*
infix to postfix: traverse from left to right and check our characters
algo:

if operand
	print
if '('
	push to stack
if ')'
	pop from stack and print untill '(' is found
if operator
	pop from stack and print untill an
	operator with less precedence is found	

*/


#include<iostream>
#include<stack>
using namespace std;

int prec(char c){ //current charecte ka precedence batayaega

    if(c=='^'){		//because ^ precedence is greatest
        return 3;
    }
    else if(c=='*'||c=='/'){
        return 2;
    }
    else if(c=='+'|| c=='-'){
        return 1;
    }
    else{
        return -1;	//because it is not our operator
    }
}

string infixtoPostfix(string s){

    stack<char> st;
    string res;

    for(int i=0;i<s.length();i++){

        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')){
            res+=s[i];
        }
        else if(s[i]=='('){
            st.push(s[i]);
        }
        else if(s[i]==')'){
            while(!st.empty() && st.top()!='('){ //empty condition first is mandatory
                res+=st.top(); 					//add of top in our result
                st.pop();						//then remove
            }
            if(!st.empty()){
                st.pop();
            }
        }
        else{
            while(!st.empty() && prec(st.top())>prec(s[i])){
                res+=st.top();
                st.pop();
            }
            st.push(s[i]);
        }

    }

    while(!st.empty()){
        res+=st.top();
        st.pop();
    }

    return res;
}

int main(){

    cout<<infixtoPostfix("(a-b/c)*(a/k-l)")<<endl;

}
//(a-b/c)*(a/k-l)

//abc/-ak/l-*

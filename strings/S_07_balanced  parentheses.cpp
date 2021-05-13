//author :shreyamalogi

//balanced parenthesis

//strings with stack approach wala problem including (switch case)

# include<bits/stdc++.h>
using namespace std;
string isBalanced(string s){
    stack <char> st;
    for(auto c:s){
        switch (c){
        	//declare the cases of opening brackets and push it into the stack
            case '(':
            case '{':
            case '[':
                  st.push(c);
                   break;
                   
        	//intitialize case of closing bracket seoperate seperately
            case '}':
                if(st.empty() || st.top()!='{' )  //if stack is empty or the top element in the stack is not equal to its partner the say no
                    return "NO";				//return no
                st.pop();						//pop out
                break;							//and break
            //copy paste same 
            case ']':
                if(st.empty() || st.top()!='[')
                    return "NO";
                st.pop();
                break;
            case ')':
                if(st.empty() || st.top()!='(')
                    return "NO";
                st.pop();
                break;
            default: break;		//dont forget to mention default
        }
    }
    return st.empty() ? "YES":"NO";  //check if stack is empty or not
}

int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        string s;
        cin >> s;
        cout << isBalanced(s) << endl;
    }
    return 0;
}

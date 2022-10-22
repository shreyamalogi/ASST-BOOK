#include<bits/stdc++.h>
using namespace std;


//  illustration
//	    1
//	  /   \
//    2     3
//   / \   / \
//  4  5  6   7


//NODE CLASS
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int value)
    {
        data= value;
        left =NULL;
	   right=NULL;
    }

};

//FUNCTION CODE

//DRIVER CODE
int main(){
    Node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    
    //print function
     cout<<FUNCTIONNAME(root)<<endl;
    
       return 0;
}

//OUTPUT


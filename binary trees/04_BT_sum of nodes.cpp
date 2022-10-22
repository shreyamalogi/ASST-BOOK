#include<bits/stdc++.h>
using namespace std;


//  eg illustration
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

int sumnodes(Node*root){        											//function sumnodes with root pointer as param
	if (root==NULL) return 0; 										 	//base case
	 int sum = sumnodes(root->left)+ sumnodes(root->right)+ (root->data); 		//leftsubtree + rightsubtree + nodevalue
	return sum;
}


//DRIVER CODE
int main(){
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right= new Node(5);
    
    //print function
     cout<<sumnodes(root)<<endl;
    
       return 0;
}

//output
//15


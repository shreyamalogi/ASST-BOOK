//author: @shreyamalogi
//count of nodes


//header 
#include<bits/stdc++.h>
using namespace std;

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

// count function 

//int count(Node *root)
//{
//    if (root == NULL) return 0; 								//base case
//
//    queue<Node *> q; 										//pushing root and null into q
//    q.push(root);
//    q.push(NULL);
//
//    int count = 0; 										//declaring count
//
//    while (!q.empty()) 									// while q is not empty, assign q.front and pop it 
//    {
//        Node *node = q.front();
//        q.pop();
//
//        if (node != NULL) 									//if node(i.e q.front) is not null, inc count and also
//        {
//            count++;
//            if (node->left)  q.push(node->left); 				//if node ka left tree exists, push it
//            if (node->right)  q.push(node->right); 				//if node ka right tree exists, push it
//               
//        }
//        else if (!q.empty()) 								// else if, q is not empty push null
//            q.push(NULL);
//    }
//
//    return count;											//return count
//}





//easy method for counting nodes
int countnodes(Node*root)
{
    if (root==NULL)   return 0;							 //base case

    return countnodes(root->left)+countnodes(root->right)+1;      //left subtreecount + rightsubtree count +1
}


//DRIVER CODE
int main(){
    Node *root = new Node(5);
    root->left = new Node(6);
    root->right = new Node(3);
    root->left->left = new Node(9);
    root->left->right= new Node(1);
    
    //print the function 
     cout<<countnodes(root)<<endl;
    
       return 0;
}

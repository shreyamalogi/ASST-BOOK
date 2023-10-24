// author @shreyamalogi 


#include<bits/stdc++.h>
using namespace std;

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


int Sum_At_K(Node *root, int k)
{
    if (root == NULL)
        return -1; 									//when we are unable to find any sum

    queue<Node *> q;
    q.push(root);
    q.push(NULL); 									// After root node when the level order will change we will push NULL
    												// HERE WE HAVE TO DEFINE OUR REQUIRED VARIABLES
    int level = 0; 									// IT WORKS AS COUNT , WE WILL CHECK UNTIL IT REACHES TO K
    int sum = 0;   									// IT USED TO STORE THE SUM OF ALL NODE'S DATA WHEN WE WILL REACH TO THE Kth LEVEL
    while (!q.empty())
    {
        Node *node = q.front();
        q.pop();
        if (node) 									// IF NODE IS not equal to null means it has
        {         									// when we found the level equals to k
            if (level == k)
                sum += node->data;
            if (node->left)
                q.push(node->left);
            if (node->right)
                q.push(node->right);
        }
        else if (!q.empty())
        {
            q.push(NULL);							// when there is no node left only NULL is present, it is a situation when the nodes of a particular level is traversed
            level++;
        }
    }
    return sum;
}

int main(){
 

    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right= new Node(5);

    //root->levelOrderTraversal(root);
     cout << Sum_At_K(root, 1);;
    return 0;
}

//OUTPUT 
//5    (2+3)


//Time- O(n)
//Space - O(n) - Auxilliary , queue

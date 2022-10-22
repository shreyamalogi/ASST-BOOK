#include<bits/stdc++.h>
using namespace std;

//binary tree node
struct Node{
	int data;
	struct Node*left, *right;
};

//iterative method to find height of bt

void printlevelorder(Node* root)
{
	//base case
	if (root == NULL)
	{
		return;
	}
	
	//create empty q for lot and push root and null
	queue <Node*> q;
	q.push(root);
	q.push(NULL);


//while looop
while(!q.empty()){
	Node * node = q.front();
	
	//pop
	q.pop();
	
	//if q.front is !null, print notes data
	if(node!=NULL){
	
		cout<<node->data<<" ";
		
		//checking if node left is not null, then push left child into queue
		if(node->left)
			q.push(node->left);
		if(node->right)
			q.push(node->right);
			
	}
	//after poping out check again if q is !empty
	else if(!q.empty())
		q.push(NULL);
	}
		
}

//utility code

Node* newNode (int data)
{
	Node * temp = new Node;
	temp->data = data;
	temp->left = temp->right = NULL;
	return temp;
}

//driver code

int main()
{
	//let us create bt shown in fig
	Node* root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);
	root->right->left = newNode(6);
	
	//print
	printlevelorder(root);
	
	return 0;
	
}



//output
//1 2 3 4 5 6

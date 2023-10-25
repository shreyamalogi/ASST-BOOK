  
//author :shreyamalogi

/*multiple blocks of memory linked to each other
advantages: size can be modified
				non contiguous memory
				insertion and deletion at any point is easy
node: data,next
head pointer stores the first node and tail pointer is last node in which there is a null
*/


//insert at head and search 

#include<bits/stdc++.h>

using namespace std;

class node{				//node class
	public:				//make it public
		int data;		//one data member is int
		node*next;		//other data member is pointer which points toward the next node
		
		//constructor
		node(int val){
			data=val;
			next=NULL;
		}
};

void insertathead(node* &head, int val){
	node* n = new node(val);
	n->next=head;
	head=n;
}

void insertattail(node* &head, int val){
	
	node*n = new node(val);
	
	//agr ek bhi node nai hai apne linked list me tb hame ek check lagana parega
	if(head==NULL){						//toh mujhe pata chal jayega ki mere linked list me kuch bhi added nai hai
		head=n;							//n mera first node hojayega uss case me aur me head ko point karwake
		return;     					//return karenge
	}
	
	node*temp=head;						//iterator will start from the head node
	while(temp->next!=NULL){			//ye loop jb tk chalega jb tk temp ka next null nai hojayega,   jb temp ka next null hojayega tb hame malum chalega ki wo apna last elemet hai
		temp= temp->next;
	}									//jb iss loop se bahar agi toh i reached on the last element
	temp->next=n; 						//temp ka jo next hai usme app value daldo n
	
}

//print karwane k liye me likungi ek function
void display(node* head){ 					//yaha pe im taking by value and not by reference
	node*temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";   //tb tk temp ka jo data hai usko print karthi rahunghi	
		temp=temp->next;         //uske baad karungi temp is equal to temp ka next
	}
	cout<<"NULL"<<endl;
}

//searching

bool search(node*head , int key){
	node*temp=head;
	while(temp!=NULL){
		if(temp->data==key){
			return true;
		}
		temp=temp->next;  //move the temp pointer to the next if not the while loop keeps going on
	}
	return false;
}


int main()
{
	node* head=NULL;
	insertattail(head,1);
	insertattail(head,2);
	insertattail(head,3);
	display(head);
	insertathead(head,4);
	display(head);
	cout<<search(head, 5)<<endl;  //5 nai hai
     return 0;
}

//
//1 2 3 NULL
//4 1 2 3 NULL
//0

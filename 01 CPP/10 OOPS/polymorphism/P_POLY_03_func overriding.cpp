//POLYMORPHISM WITH FUNCTION OVERRIDING

#include<bits/stdc++.h>
using namespace std;

class base
{
	public:
	  virtual void print()
		{
			cout<<"this is base class print function"<<endl;
		}
		void display()
		{
			cout<<"this is base class display function"<<endl;
		}
};

class derived: public base
{
	public:
		void print()
		{
			cout<<"this is derieved class print function"<<endl;
		}
		void display()
		{
			cout<<"this is derieved class display function"<<endl;
		}
	   	
};


int main()
{
	base *baseptr;
	derived d;
	baseptr = &d;
	
	baseptr -> print();
	
	baseptr -> display();
	
	
	return 0;
}

//output
//this is derieved class print function
//this is base class display function

//note : to get derieved class we need to add virtual (dynamic)



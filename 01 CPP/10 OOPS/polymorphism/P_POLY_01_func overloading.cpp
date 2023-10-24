//The word polymorphism means having many forms. In simple words, we can define polymorphism as the ability of a message to be displayed in more than one form. A real-life example of polymorphism, a person at the same time can have different characteristics. Like a man at the same time is a father, a husband, an employee. So the same person posses different behavior in different situations. This is called polymorphism. Polymorphism is considered as one of the important features of Object Oriented Programming.

//In C++ polymorphism is mainly divided into two types:
//
//Compile time Polymorphism : 1) function overloading, 2)operator overloading
//Runtime Polymorphism : virtual functions




//EXAMPLE FOR FUNCTION OVERLOADING

#include<iostream>
using namespace std;

class Stargirl
{
	public:
		void fun()
		{
			cout<<"im a function with no arguments"<<endl;
		}
        
        void fun(int x)
        {
          cout<<"im a function with int arguments"<<endl;	
		}
		
		void fun(double x)
        {
          cout<<"im a function with double arguments"<<endl;	
		}
		

};


int main()
{

    Stargirl obj;
    obj.fun();
    obj.fun(4);
    obj.fun(6.2);

	
	return 0;
}

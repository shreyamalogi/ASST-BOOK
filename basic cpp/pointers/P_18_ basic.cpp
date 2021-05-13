//author :shreyamalogi

//pointers are variables that store the address of other variables
//pointer use karke variable ko access bhi karsakthe aur modify bhi
#include<bits/stdc++.h>

using namespace std;

int main()
{
	int a=10;
	int* aptr = &a;
	
	cout<<*aptr<<endl;  //10
	*aptr=20;
	cout<<a<<endl;		//20
     return 0;
}


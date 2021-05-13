//author :shreyamalogi

//pointer arithmetic : ++, --, +, - //only 4

#include<bits/stdc++.h>

using namespace std;

int main()
{
	
	//int data type
	int a=10;				//declare variable
	int*aptr = &a;			//declare pointer
	cout<<aptr<<endl;  		//0x6ffe14 							(gives address of a)
	
	aptr++;					//incremnt the pointer 				(it goes to next memory location)
	cout<<aptr<<endl;		//0x6ffe18  						(cuz int takes 4 bytes)
	
//	//char datatype
//	char ch='a';
//	char*cptr = &ch;		
//	cout<<cptr<<endl;		//a¦o
//	
//	cptr++;
//	cout<<cptr<<endl;		//¦o								(cuz char is 1 byte)
     return 0;
}


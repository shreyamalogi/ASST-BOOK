//author :shreyamalogi

/*
07 jumps in loops which consits of 2 statements
with break and continue statements

these are used when we want to control the flow of a loop
on meeting specified condition

*/


#include<bits/stdc++.h>

using namespace std;

int main()
{
	
	for(int i=1; i<=30; i++) 	//date in month from 1 to 30
	if(i%2==0)
		continue;				//continue hit hothe hi, jo hamara next statement hai go out vo execute nahi hogi, we will skip to the next iteration
	else
		cout<<"go out"<<endl;
     return 0;
}


//go out
//go out
//go out
//go out
//go out
//go out
//go out
//go out
//go out
//go out
//go out
//go out
//go out
//go out
//go out


//it is printing 15 times to go out in a month which are the odd days


//author :shreyamalogi

/*

check the maximum from three given numbers
using nested if else

*/


#include<bits/stdc++.h>

using namespace std;

int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	
	//a is greater than b
	if(a>b){
		if(a>c){
			cout<<a<<endl;
		}
		else{
			cout<<c<<endl;
		}
	}
	
	//b is greater than a (compare b and c)
	else {
		if(b>c)
			cout<<b<<endl;
		else
			cout<<c<<endl;
		}
	
     return 0;
}


//12 56 32

//56


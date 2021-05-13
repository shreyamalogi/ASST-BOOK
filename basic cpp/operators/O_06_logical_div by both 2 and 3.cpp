//author :shreyamalogi

//write a program to output whether a no. is divisible by both 2 and 3 
//or divisible by only 1 of them

#include<bits/stdc++.h>

using namespace std;

int main()
{
	int tt;
	cin>>tt;
	while(tt--){
	int n;
	cin>>n;
	
	if(n%2==0 && n%3==0)
		cout<<" divisible by 2 and 3"<<endl;
	else if (n%2==0) 
		cout<<"divisible by 2 "<<endl;
	else if (n%3==0)
		cout<<"divisible by 3"<<endl;
	else
		cout<<"divisible by none";
	}
	
	
     return 0;
}


//4  (test cases)
//6
// divisible by 2 and 3
//4
//divisible by 2
//9
//divisible by 3
//11
//divisible by none


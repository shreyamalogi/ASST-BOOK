//print numbers till n ........decreasing order and increasing order


////note :Objective: To print numbers 1 to n, in increasing as well as decreasing order.
//We have to do two things, 1. Recurse for the remaining number
//
//2. Print the numbers
//
//Base Case : If n == 1:
//print(1)
//return;
//
//Time Complexity: O(N)
//Space Complexity: O(N), for the call stack

#include<iostream>

using namespace std;

void dec(int n)
{
	if(n==0)
	{
		return ;
	}
	
	cout<<n<<endl;
	dec(n-1);
}


void inc(int n)
{
	if(n==1)
	{
		return ;
	}
	inc(n-1);
	cout<<n<<endl;
}
int main()
{
	int n;
	cin>>n;
	
	dec(n);
	inc(n);
	return 0;
}

//input 4
//output 4 3 2 1




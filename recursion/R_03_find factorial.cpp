//find the factorial of a number using recursion
//
#include<iostream>

using namespace std;

int factorial(int n)
{
	if( n==0)
	{
		return 1;
	}
	//int prevfact = factorial(n-1);
	//return n * prevfact; or
	return n * factorial(n-1);
	
}

int main()
{
	int n;
	cin>>n;
	
	cout<<factorial(n)<<endl;
	return 0;
}

//input 4
//output 24 : 4*3*2*1 = 24

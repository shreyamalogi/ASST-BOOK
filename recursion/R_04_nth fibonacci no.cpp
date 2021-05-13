// TO PRINT THE NTH fIBONACCI NUMBER

// EXAMPLE OF FIBONACCI SEQUENCE : 0,1,1,2,3,5,8,13...
// it makes 2 calls so 2 base cases
//fib(n)= fib(n-1)+fib(n-2)


#include<iostream>

using namespace std;

int fib(int n)
{
//	if(n==0)
//	{
//		return 0;
//	}
//	if(n==1)
//	{
//		return 1; or in a better way 

    if(n==0 || n==1)
    {
    	return n;
	}
	return fib(n-1)+ fib(n-2);
	
}

int main()
{
	int n;
	cin>>n;
	
	cout<<fib(n)<<endl;
	return 0;
}

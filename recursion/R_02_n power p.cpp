//calculate n raised to power p using recursion

//logic: n power p means nxnxnxn..........xn.p times

#include<iostream>

using namespace std;

int Power(int n, int p)
{
	if(p==0)                         //base case
	{
		return 1;
	}
	
	int prevPower = Power(n, p-1);            //recursive case
	return n*prevPower;
}

int main()
{
	int n,p;
	cin>>n>>p;
	
	cout<<Power(n,p)<<endl;
	return 0;
}

//input 4 3 is 4 power 3
// output 64

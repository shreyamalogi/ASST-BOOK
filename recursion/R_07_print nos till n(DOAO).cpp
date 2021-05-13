//print numbers till n ........decreasing order and increasing order

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

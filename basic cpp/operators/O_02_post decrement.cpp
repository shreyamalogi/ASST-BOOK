//author :shreyamalogi

//postincrement: current value of a is preserved temporarily
//a will increment before next statement is executed

#include<bits/stdc++.h>

using namespace std;

int main()
{
	int a=10;
	int b;
	
	b=a++;// 10 will go in b then increment
	cout<<a<<" "<<b<<endl;
     return 0;
}

//11 10


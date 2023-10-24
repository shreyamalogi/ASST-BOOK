//author :shreyamalogi

//print even numbers upto 10th element
//by using for loop

#include<iostream>
using namespace std;

int main()
{
	for(int i=1; i<=10; i++) 		//equal to symbol is compulsory without which we get onnly 9 elements
	{
		cout<<2*i<<" ";  		//formula: even = 2n, odd = 2n+1
	}
	return 0;
}

//2 4 6 8 10 12 14 16 18 20
//0 2 4 6 8 10 12 14 16 18 20    if i=0 (if we include 0 also)

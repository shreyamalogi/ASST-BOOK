//author :shreyamalogi

// print all the odd numbers below 10
//by using for loop

#include<iostream>

using namespace std;
int main()
{
	for(int i=0 ;i<10 ;i++ )
	{
		if((i%2)!=0)  //check with remainder and if it is not equal to zero then it is odd
		{
				cout<<i<<" ";
		}
		
	}
	return 0;
}

//1 3 5 7 9

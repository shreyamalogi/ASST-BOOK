//author :shreyamalogi

//print even numbers upto 10th element
//by using for loop

#include<iostream>
using namespace std;

int main()
{
	for(int i=1; i<=10; i++) 		//equal to symbol is compulsory without which we get onnly 9 elements
	{
		cout<<i*2<<" ";  			//variable should be multiplied by 2 in order to get even
	}
	return 0;
}

//2 4 6 8 10 12 14 16 18 20
//0 2 4 6 8 10 12 14 16 18 20    if i=0 (if we include 0 also)

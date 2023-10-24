//here n=5 i.e 0101 and we neeed to get bit at position i=2 so
// i<<i=0100  0101 & 0100 = 0100 so we get 1 
//use &


#include<bits/stdc++.h>
using namespace std;

int getBit(int n, int i){
	int mask = (1<<i);
	return ((n & mask)!=0);
}


int main()
{
	cout<<getBit(5,2); 
	return 0;
}

//1

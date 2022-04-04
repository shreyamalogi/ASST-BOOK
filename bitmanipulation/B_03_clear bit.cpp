/* 
to make it to 0
use ~
then &

n= 0101
suppose we need to clear bit at position , i=2
1<<i = 0100
~0100 = 1011
0101 & 1011 = 0001

*/


#include <bits/stdc++.h>

using namespace std;

int clearBit(int n, int i){
	int mask = ~(1<<i);
	return (n & mask);
}

int main(){
	
	cout<<clearBit(5,2);
	return 0;
}

//1

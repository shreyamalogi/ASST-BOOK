/* 
update bit = clear bit + set bit
n = 0101
suppose we need to update bit at position , i=1 to 1
1<<i = 0010
~0010 = 1101
0101 & 1101 = 0101
1<<i = 0010
0101 | 0010 = 0111

*/


#include<bits/stdc++.h>

using namespace std;

int updateBit(int n, int i, int value){
	int inversemask = ~(1<<i);
	n = n & inversemask; //clearbit
	return (n | (value<<i)); //setbit
}

int main(){
	
	cout<<updateBit(5,1,1);
	return 0;
}

//7

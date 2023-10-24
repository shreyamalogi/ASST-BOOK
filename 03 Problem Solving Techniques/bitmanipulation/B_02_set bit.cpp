

/* 

set means to set the bit value to 1 , unset =0
use or


n= 5= 0101
we need to set bit at position , i=1
1<<i = 0010
0101 | 0010 = 0111 = 7

*/

#include<bits/stdc++.h>

using namespace std;

int setBit(int n, int i){
	int mask = (1<<i);
	return (n | mask);
}

int main(){
	
	cout<<setBit(5,1);
	return 0;
}

//7

//author :shreyamalogi

#include<bits/stdc++.h>

using namespace std;

int main()
{
	
	//initialize 3 variables
	int i=1;
	int j=2;
	int k;
	
	//1  //2  //1  //2   //3   //4  
	k=i + j + i++ + j++ + ++i + ++j;
	cout<<i<<" "<<j<<" "<<k;
     return 0;
}

//
//3 4 13  //last me i aur j ki value 3 aur 4 thi

//author :shreyamalogi

//pointers to functions using pass by vale

#include<bits/stdc++.h>

using namespace std;

void increment(int a){
	a++;
}

int main()
{
	int a=2;
	increment(a);	//pass by value
	cout<<a<<endl;   //2
     return 0;
}


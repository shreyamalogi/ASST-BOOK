// question: how many numbers between 1 and 1000 are divisible by 5 or 7

//logic
// ex:total students: n1+n2-n3
//ex: n1 students have took math, n2 students science, n3 students took both 

//inclusion exclusion principle in functions
//number theory concept

#include<bits/stdc++.h>

using namespace std;

int divisible(int n, int a, int b){
	int c1=n/a;
	int c2=n/b;
	int c3=n/(a*b);
	
	return c1+c2-c3;
	
}

int main()
{
	int n,a,b;
	cin>>n>>a>>b;
	cout<<divisible(n,a,b)<<endl;
	return 0;
}


//5 3 2
//3

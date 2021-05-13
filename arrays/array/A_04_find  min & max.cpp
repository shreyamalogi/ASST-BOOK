//author :shreyamalogi

//print max and min elements

#include<bits/stdc++.h>
//#include<climits>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	
//	each element ko maximum aur minimum value se compare karenge 
//	aur jaha pe currect max zyada miljatha hai toh hum maximum ko update kardete hai
//	aur jaha pe km miljatha hai toh minimum ko update kardete hai

//	int mx;
//	int mn;  //just delaring is not enough we have to even initialize it

	int mx = INT_MIN;
	int mn = INT_MAX;
	
	for(int i=0;i<n;i++)
	{
//		if(a[i]>mx)		//if hamara number(unknown) 
//			mx= a[i];		//toh mx ko update kardo apne no se
//		if(a[i]<mn)
//			mn= a[i];

	mx = max(mx,a[i]);  //max is a built in function
	mn = min(mn,a[i]);
	}
	
	cout<<mx<<" "<<mn;
     return 0;
}


//5
//10 29 47 100 42
//100 10


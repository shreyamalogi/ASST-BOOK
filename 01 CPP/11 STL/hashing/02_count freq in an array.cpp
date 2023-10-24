//author :shreyamalogi

//count frequency in a given array

//this same with unordered map too
//here we need to maintain frequency of each element
//key will be elements
//value will be frequency

//(how many tims a single element is occuring is the value

#include<bits/stdc++.h>
#define ff first
#define ss second
//#define other things

using namespace std;

int main()
{
	int n;
	cin>>n;
	vi a(n);
	for(int i=0;i<n;i++) cin>>a[i];
	
	map<int,int>m;   //here m is the frequency
	rep(i,0,n){
		m[a[i]]++;
	}
	
	map<int,int> :: iterator it ;//declaring iterator it
	for(it=m.begin(); it!=m.end(); it++)
	{
		cout<<it->ff <<" "<< it->ss<<endl;		//cout it ka first and it ka second
	}
	
	
     return 0;
}


//6
//1 2 1 3 2 1

// 1 teen baar aaya , 2 dho baar

//1 3
//2 2
//3 1

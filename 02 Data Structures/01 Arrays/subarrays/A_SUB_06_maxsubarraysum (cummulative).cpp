//author :shreyamalogi

//maximum subarray sum
//cumulative sum arrproach 		//-1+4=3, -1+4+7=10....just like memory game 
//tc : O(N^2)

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	
	int cs[n+1];		//take an array of currsum
	cs[0] = 0;			//currentsum ka zethoeth element ko initialize karenge 0 tk
	
	for(int i=1;i<=n;i++)
		cs[i]=cs[i-1]+a[i-1]; //this i-1 is because our loop is from i to n
	
	int ms=INT_MIN;	
	for(int i=1;i<=n;i++){
		int sum=0;
		for(int j=0;j<i;j++){  //0 to i-1
			sum=cs[i]-cs[j];
			ms=max(ms,sum);   //check if our sum is max
		}
	}
	cout<<ms<<endl;
	return 0;
}

//5
//1 -4 3 2 1
//6

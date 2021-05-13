//author :shreyamalogi
//smallest positive missing

#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	
	const int N= 1e6+2;
	bool  check[N];   //our check array
	for(int i=0;i<N;i++) 
	{
		check[i]=0; //first initialize it with false
		
	}
	
	//iterate over the array and the ones which is non negative mark it as true
	for(int i=0;i<n;i++)
	{
		if(a[i]>=0)   //non negitive
		{
			check[a[i]]= 1; //check of a[i] ko true mark kardo
			
		}
		
	}
	int ans= -1;  //initialize
	for(int i=1;i<N;i++)  //iterate it with 1 cuz we need to find positive
	{
			if(check[i]==0)	//if check of i is false
			{
				ans=i;    //ans me dalenge i ko
				break;    //break;
			}
	}

		cout<<ans<<endl;	
	
	
     return 0;
}


//6
//0 -9 1 3 -4 5

//2

//author :shreyamalogi

//maximum subarray sum

//o(n^3) tc : bad , cuz its brute force
//o(n^2)next code will be using cumulative sum approach
//o(n) in next next code

#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	
	
	 int mxsum=INT_MIN;
	for(int i=0;i<n;i++)  // 0 to n
	{
		for(int j=i;j<n;j++) //i to n
		{
			int sum=0;		//mandatory to initialize it here only
			for(int k=i; k<=j; k++) //i to j (cuz we need to find the elemenets between i and j)
			{
				sum += a[k];
			}
			mxsum = max(mxsum,sum);
		}
	}
	cout<<mxsum<<endl;
	
     return 0;
}

//4
//-1 4 7 2

//13


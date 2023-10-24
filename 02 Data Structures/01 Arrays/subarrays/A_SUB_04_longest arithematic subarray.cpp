
//author :shreyamalogi
//longest arithematic subarray (asked in google kickstart)
//hint: equal aayega diff

//intution and approach
//loop over the array
//maintain the following variables:
//	1. previous common difference: pd
//	2. current arithmetic subarray length (curr)
//	3. Max arithetic subarray length(ans)

#include<bits/stdc++.h>

using namespace std;

int main()
{
	int tt;
	cin>>tt;
	while(tt--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0; i<n; i++)
			cin>>a[i];
		
		//declaring our approched variables	
		int ans = 2;
		int pd = a[1]-a[0];
		int j=2;
		int curr=2;
		
		while(j<n)
		{
			if(pd==a[j]-a[j-1]) //check if hamara prev comm diff , curr comman diff hai ki nai
			{
				curr++;         //agr hai toh increment curr
			}else{
				pd=a[j];            //update kardo pd ko a[j] se
				curr=2;
			}
			ans= max(ans, curr);
			j++;
		}
		cout<<ans<<endl;
			
		
	}
     return 0;
}

//
//7
//10 7 4 6 8 10 11

//4 (output need optimization)
//as 4 6 8 10

//author :shreyamalogi

//maximum subarray sum by using kadanes algorithm

//tc: o(n)

//negitive elements will be updated to 0 in the current sum


#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	
	int cs=0;
	int ms=INT_MIN;
	
	
	for(int i=0;i<n;i++) 		//I TO N WARAKAU RUN AYYE LOOP LO
	{
		cs+= a[i]; 				//cs lo a[i] add cheYI
		if(cs<0)  				//if cs is negative make it 0
			cs=0;
		ms=max(ms,cs);			//maxsum kanukoni 
	}
	cout<<ms<<endl;				//print cheyi
	
     return 0;
}


//5
//-1 4 -6 7 -4
//7


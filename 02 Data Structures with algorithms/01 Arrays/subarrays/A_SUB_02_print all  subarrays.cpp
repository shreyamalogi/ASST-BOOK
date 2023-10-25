//author :shreyamalogi

//to print all the subarrays

#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	
	for(int i=0;i<n;i++){				//starting point
		for(int j=i;j<n;j++){			//ending point
			for(int k=i;k<=j;k++) {		//for printing the elements in between i and j
				cout<<a[k]<<" ";
			}cout<<endl;
		}
	}
     return 0;
}


//4
//-1 4 7 2

//-1
//-1 4
//-1 4 7
//-1 4 7 2
//4
//4 7
//4 7 2
//7
//7 2
//2


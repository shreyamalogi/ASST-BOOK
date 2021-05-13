//author :shreyamalogi

//holow rectangle pattern

//pro tip : always keep i<= //equal to sign is compulsary in patterns

//5 4
//****
//*  *
//*  *
//*  *
//****

#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	
	for(int i=1;i<=n;i++){    		//rows k liye
		for(int j=1;j<=m;j++){		//coloums k liye
			if(i==1 || i==n || j==1 || j==m){
				cout<<"*";
			}
//			else if(j==1 || j==m){
//				cout<<"*";
//			}
			else{
				cout<<" ";
			}
		}
		cout<<endl;  
	}
     return 0;
}


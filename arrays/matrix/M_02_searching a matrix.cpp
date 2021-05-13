//author :shreyamalogi

#include<bits/stdc++.h>

using namespace std;

int main()
{
	 int n,m;
	 cin>>n>>m;
	 int a[n][m];
	 for(int i=0;i<n;i++)
	 {
	 	for(int j=0;j<m;j++)
	 	{
	 		cin>>a[i][j];
		}
	 }
	 
	cout<<"matrix is: \n";
	for(int i=0;i<n;i++)
	 {
	 	for(int j=0;j<m;j++)
	 	{
	 		cout<<a[i][j]<<" ";
		}
		cout<<endl;
	 }

	int q;
	cin>>q;
	
	bool flag= false;  //initially
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(a[i][j]==q){
				cout<<i<<" "<<j<<endl;	//printing the co-ordinates
				flag=true;             //agr element milgaya toh true
			}
		}
	}
	
	//end me check karenge ki elemenet mila ki nai
	
	if(flag){
		cout<<"element is found\n";
	}else{
		cout<<"element not found";
	}
	
}


//3 3
//89 17 10
//6 8 1
//17 89 35

//matrix is:
//89 17 10
//6 8 1
//17 89 35

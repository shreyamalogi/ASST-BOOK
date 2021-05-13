//author :shreyamalogi

//RECTANGLE PATTERN

//5 4
//****
//****
//****
//****
//****


#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,m;   //taking rows and coloums
	cin>>n>>m;
	
	for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				cout<<"*";	
			}
			cout<<endl;
		}
		
		
     return 0;
}


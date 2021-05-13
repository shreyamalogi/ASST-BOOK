//author :shreyamalogi

//half pyramid after 180 degree rotation

//i is the row number
//eg: 1st row me 1 star but n-1=4 4 is 4 spaces


//6
//     *
//    **
//   ***
//  ****
// *****
//******


#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n; j++){
				if(j<=n-i){
					cout<<" ";
				}
				else{
					cout<<"*";
				}
			}
			cout<<endl;	
		}
     return 0;
}


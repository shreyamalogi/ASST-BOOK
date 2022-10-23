//author @shreyamalogi
// hill pattern


#include<bits/stdc++.h>
using namespace std;




int main(){
	
int n;
cin>>n;

for(int i=1; i<=n;i++){
	for(int j=i; j<=n ; j++){
		cout<<"  ";
	}
	for(int j=1; j<i; j++){
		cout<<"* ";
	}
	for(int j=1; j<=i; j++){
		cout<<"* ";
	}
	
	
	cout<<endl;
}


return 0;
}



//output 
//for(int j=1; j<=i; j++){
//		cout<<"* ";
//	}
//
//5
//          * *
//        * * * *
//      * * * * * *
//    * * * * * * * *
//  * * * * * * * * * *
//  
//  we need peek so just remove =






//final output
//5
//          *
//        * * *
//      * * * * *
//    * * * * * * *
//  * * * * * * * * *


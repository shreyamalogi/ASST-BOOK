//author @shreyamalogi
//decreasing right sided triangle

#include<bits/stdc++.h>
using namespace std;




int main(){

int n;
cin>>n;

for(int i=0;i<=n;i++){
	for(int j=1; j<=i; j++){
		cout<<"  ";
	}
	
	for(int j=i; j<=n;j++){
		cout<<"* ";
	}
	cout<<endl;
}



return 0;
}

//
//output
//5
//* * * * * *
//  * * * * *
//    * * * *
//      * * *
//        * *
//          *

//author @shreyamalogi
//increasing triangle pattern

//note i counter for rows and j for cols


#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n;
	cin>>n;
	
	for(int i=1; i<=n; i++){
		for(int j=1; j<=i; j++){
			cout<<"* ";
		}
		cout<<endl;
	}


return 0;
}


//output
//
//5
//*
//* *
//* * *
//* * * *
//* * * * *


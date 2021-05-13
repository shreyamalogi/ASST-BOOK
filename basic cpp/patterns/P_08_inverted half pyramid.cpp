//author :shreyamalogi

//inverted half pyramid

//1st row here is 5th row cuz its inverted and keep printing the stars bases upon the row number
//eg: row 1 is 5th row so print 5 stars then keep decresaing

//5
//*****
//****
//***
//**
//*

#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;   //only 1 input
	cin>>n;
	
	for(int i=n;i>=1;i--){    //n to 1
		for(int j=1;j<=i;j++) //j eqal to row no.
			cout<<"*";
		cout<<endl;
	}
     return 0;
}


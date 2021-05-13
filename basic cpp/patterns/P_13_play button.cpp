//play button pattern

#include<iostream>

using namespace std;

int main()
{
	int n;
	cout<<"enter number of columns:";
	cin>>n;
	
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=i; j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	for(int i=n-1; i>=1; i--)
	{
		for(int j=1; j<=i; j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}


//enter number of columns:5
//*
//**
//***
//****
//*****
//****
//***
//**
//*

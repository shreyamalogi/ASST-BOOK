//author :shreyamalogi

//check whether a given triplet is pythogorean triplet or not


#include<bits/stdc++.h>

using namespace std;

bool check(int x, int y, int z)		//return type will be bool
{
	int a = max(x, max(y,z));   //store max value in a
	int b, c;
	
	if(a==x){
		b=y;
		c=z;
	}
	else if(a==y){
		b=x;
		c=z;
	}
	else{
		b=x;
		c=y;
	}
	
	if(a*a == b*b + c*c)
		return true;
	else
		return false;
}


int main()
{
	int x,y,z;
	cin>>x>>y>>z;
	
	if (check(x,y,z))
	{
		cout<<"yes, it is pythogorean triplet";
		
	}
	else
	{
		cout<<"not a pythogorean triplet";
	}
     return 0;
}

//
//3 4 5
//pythogorean triplet.

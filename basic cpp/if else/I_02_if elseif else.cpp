//author :shreyamalogi

/*
print greater than elements
use if else lader

*/


//IF-ELSEIF-ELSE

#include<iostream>
using namespace std;

int main ()
{
	int tt;
	cin>>tt;
	while(tt--){
		
	int n;
	cin>>n;
	
	if(n>1 && n<10)
      cout<<"greater than 1 and less than 10";
		
	else if (n>=20 && n<=30)
		cout<<"greater than 20 nad less than 30 ";
		
	else
		cout<<"greater than 30";
	}
	return 0;
}

//
//3
//2
//greater than 1 and less than 10
//21
//greater than 20 nad less than 30
//65
//greater than 30


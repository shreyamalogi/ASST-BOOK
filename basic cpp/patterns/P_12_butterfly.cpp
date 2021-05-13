//author :shreyamalogi

//BUTTERFLY PATTERN

//for upper pattern
//rows: 1 to n
//* is row number
//space: 2*n-2* row no.

//for lower pattern
//rows: n to 1


//7
//*            *
//**          **
//***        ***
//****      ****
//*****    *****
//******  ******
//**************
//**************
//******  ******
//*****    *****
//****      ****
//***        ***
//**          **
//*            *

#include<bits/stdc++.h>

using namespace std;

int main()

{
  int r,i,j;
  cin>>r;
  
  for(i=1;i<=r;i++)
  {
    for(j=1;j<=i;j++)
    cout<<"*";
    for(j=1;j<=2*(r-i);j++)
    cout<<" ";
    for(j=1;j<=i;j++)
    cout<<"*";
    cout<<"\n";
  }
  
  for(i=r;i>=1;i--)
  {s
    for(j=1;j<=i;j++)
    cout<<"*";
    for(j=1;j<=2*(r-i);j++)
    cout<<" ";
    for(j=1;j<=i;j++)
    cout<<"*";
    cout<<"\n";
  }
  return 0;
}
	
	
	
	


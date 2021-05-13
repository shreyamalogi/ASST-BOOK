
//to convert a string to upper case and lower case

//hint: //cout<<'a'-'A'<<endl;         //ASCII VALUE IS 32 
//author :shreyamalogi

#include<bits/stdc++.h>

using namespace std;

int main()
{
   string str = "aggyfggfrnjl";
   
   // convert to upper case
   for(int i=0; i<str.size(); i++){
   	if (str[i]>='a'  && str[i]<='z')  //koi bhi character string ka is greater than or equal to a and less than equal to z
   	   str[i]-=32;
   }
   cout<<str<<endl;
   
   //convert to lower case
   for(int i=0; i<str.size(); i++){
   	if(str[i]>='A'  && str[i]<='Z')
   	 str[i]+=32;
   }
   cout<<str<<endl;
   
  return 0;
  }
  
  //AGGYFGGFRNJL


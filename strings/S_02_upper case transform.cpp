//AN OTHER WAY OF CONVERTING STRINGS TO UPPER CASE USING TRANSFORM
//author :shreyamalogi

#include<bits/stdc++.h>

using namespace std;

int main()
{
  string s = "hwkefHkw";
  
  // TO CONVERT TO UPPER CASE
  transform(s.begin(),s.end(),  s.begin(), ::toupper);
  cout<<s<<endl; 
  
  //TO CONVERT TO LOWER CASE
  transform(s.begin(),s.end(),   s.begin(), ::tolower);
  cout<<s<<endl;
  return 0;
  }
  
//HWKEFHKW
//hwkefhkw


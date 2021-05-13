//move all x to the end of the string

#include<iostream>
using namespace std;

string moveX (string s)
{
	if(s.length()==0){  //base case
	  return "";	
	}
	
	char ch=s[0];
	string ans= moveX(s.substr(1)); //move all for the rest of the string
	
	if(ch=='x'){
		return ans+ch;  //x gets aaded at the last
	}
	return ch+ans;
}

   

int main()
{
	cout<<moveX("xxbghdgsgdgyxcvhghx");
	return 0;
}

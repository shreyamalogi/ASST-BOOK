//GENERATE ALL SUBSTRINGS OF A STRING

//n = 2 power n
//eg : "abc" = ",a,b,ab,c,ac,bc,abc

#include<iostream>

using namespace std;


void subseq(string s, string ans)
{
	if(s.length()==0){
	  cout<<ans<<endl;
	  return;
	}
	
	char ch=s[0];
	string ros=s.substr(1);
	
	subseq(ros, ans);
	subseq(ros,ans+ch);
}
int main()
{
	subseq("ABC", "");
	return 0;
}

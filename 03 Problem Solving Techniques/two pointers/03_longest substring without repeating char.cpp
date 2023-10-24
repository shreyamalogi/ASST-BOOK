//author :shreyamalogi

//Longest substring without repeating characters.

//two pointer sliding window technique

//idea:
//while iterating mark the position of each character
//at ith char, check the prev occurence and decide the start of the substring accordingly

#include<bits/stdc++.h>

using namespace std;

int main()
{
	string s; cin>>s;
	vector<int> dict(256,-1); //cuz of ascii
	int mxl =0, start=-1;  //max length
	for(int i=0;i<s.size();i++){
		if(dict[s[i]]>start)   //if purani position is greater than start
			start = dict[s[i]];  //update start
		dict[s[i]]=i;
		mxl = max(mxl, i-start);
	}
	cout<<mxl;
	
	
     return 0;
}


//pwwkew
//3

//bbbbb
//1

//pwkerr
//5

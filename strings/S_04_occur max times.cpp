
//GIVEN A STRING we must output the ones which occur maximum times
//author :shreyamalogi


//hint: " a b c a c b a d e" (a occurs max times)
//frequency = 3, output =3

//hint 2 : count pata karne ka hai (size 26) as in a to z 
#include<bits/stdc++.h>

using namespace std;

int main()
{
   string s ="ekwhfheglweg";
   int freq[26];
   
   for(int i=0; i<26; i++)
      freq[i]=0;
      
    for(int i=0; i<s.size(); i++)  
      freq[s[i]-'a']++;
      
    char ans = 'a';
	int maxF = 0;
	
	for(int i=0; i<26; i++)  
	{
		if(freq[i]>maxF){
			maxF = freq[i];
			ans = i+'a';
		}
	}
	cout<<maxF<<" "<<ans<<endl;
  return 0;
  }


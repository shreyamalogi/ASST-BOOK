//GETLINE() to input ////declare with value but with spaces and full sentence will be printed
//author :shreyamalogi

#include<bits/stdc++.h>

using namespace std;

int main()
{
  string str;
  //cin>>str     //wont work (panga hosaktha kyunki it will print just hfh
  getline(cin, str); //pure k pure sentence ko input karalega
  cout<<str;
  return 0;
  }

//INPUT
hfh  jkfhdkshf kuhrfuWHRF
//OUTPUT
hfh  jkfhdkshf kuhrfuWHRF






//append strings {jodna}
//author :shreyamalogi

#include<bits/stdc++.h>

using namespace std;

int main()
{
  string str;
  
  string s1 = "fam";
  string s2 = "ily";
  
  //method 1
  s1.append(s2); // agr s1 me append karana s2 ko 
  cout<<s1<<endl; // toh output ajayega family
  
  //or method 2
  
  //s1=s1+s2                //we can also declare like this
  //cout<<s1+s2<<endl;      //without using append 
   
   
    //agr s1 ka dusra character access karna hei toh
                           
   //cout<<s1[2]<<endl;    
  return 0;
  }
  
  
 
 
 
 
 //STRING WITH length function 1
//author :shreyamalogi

#include<bits/stdc++.h>

using namespace std;

int main()
{
  string s1 = "nincompoop";
  cout<<s1.size()<<endl;
  return 0;
  }
  
  //OUTPUT 10
  
  
  
   
  
  
//length() 2
//length function by using for loop
//author :shreyamalogi

#include<bits/stdc++.h>

using namespace std;

int main()
{
  string s1 = "nincompoop";
  
  for(int i=0; i<s1.length(); i++)  //ek ek character pe ja sakthi hu loop lagake
  cout<<s1[i]<<endl;
  return 0;
  }
  
  //output
//n
//i
//n
//c
//o
//m
//p
//o
//o
//p





//to string()
//to string function in strings
//author :shreyamalogi

#include<bits/stdc++.h>

using namespace std;

int main()
{
  int x=786;
  cout<<to_string(x) + "2";
  return 0;
  }
  
  
  
  
  
  //substring()
//strings with substring function
//substring is a part of string
//author :shreyamalogi

#include<bits/stdc++.h>

using namespace std;

int main()
{
  string s1 = "nincompoop";
  
  string s = s1.substr(6,4); //(KONSE INDEX SE , KITNE CHARATERS agae TK chahiyae)
  cout<<s;
  return 0;
  }
  
  //poop
  
  
  
  
  
  
//strings with sort function
//author :shreyamalogi

#include<bits/stdc++.h>
//#include <algorithm> me baithe hotha ye sort function
//#include<string>     me baita hotha ye strings sb
using namespace std;

int main()
{
  string s1 = "acazdgweitupmbnhg";
  sort(s1.begin(), s1.end());  // it will sort from a to z in ascending order
  
  cout<<s1;
  return 0;
  }

//aabcdegghimnptuwz






//strings with insert function {beech me kuch gussani hai}
//author :shreyamalogi

#include<bits/stdc++.h>

using namespace std;

int main()
{
  string s1 ="nincompoop";
  s1.insert(2,"lol"); //(KIS INDEX PE, STRING NAME TO BE INSERTED
  cout<<s1;
  return 0;
  }
  
  //OUTPUT
  //nilolncompoop
  
  
  
  
  
  //strings with find fUnction
//author :shreyamalogi

#include<bits/stdc++.h>

using namespace std;

int main()
{
  string s1 = "nincompoop";
  
  cout<<s1.find("poo")<<endl;  //ye uska peha index return karega kaha pe ye miltha hai
  return 0;
  }
  
  //output
  //6
  
  //as  6rd index se start hora mera p
  
  
  
  
  
  
//STRINGS ERASE FUNCTION
//author :shreyamalogi

#include<bits/stdc++.h>

using namespace std;

int main()
{
  string s1= "nincompoop";
  
  s1.erase(3,2);  //arguments me we must send (index,character)
  cout<<s1;
  return 0;
  }
  
  
  
  
  //empty function
  //author :shreyamalogi

#include<bits/stdc++.h>

using namespace std;

int main()
{
   string s1 = "abc";
   cout<<s1<<endl;     //first it will print abc
   
   s1.clear();         //then it will clear abc
   
   if(s1.empty())
    cout<<"string is empty";  //then it will print this
  return 0;
  }
  
  //output (as there are 2 couts so 2 couts will be printed )s
  //abc
  //string is empty
  
  
  
  
  
  
  //STRINGS WITH COMPARE FUNCTION
//author :shreyamalogi

#include<bits/stdc++.h>

using namespace std;

int main()
{
  string s1 = "abc";
  string s2 = "xyz";
  cout<<s2.compare(s1)<<endl; //ye s2 ko compare karaha s1 se
  return 0;
  }
  
  
  
  
  
  //compare function part 2
//author :shreyamalogi

#include<bits/stdc++.h>

using namespace std;

int main()
{
  string s1 = "abc";
  string s2 = "abc";
  
  cout<<s2.compare(s1)<<endl;
  return 0;
  }
  
  //output 0
  
  
  
  
  











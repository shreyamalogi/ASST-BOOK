//form the biggest number from the numeric string

//hint: decreasing order me sort kare toh wahi biggest hoga na
//author :shreyamalogi

#include<bits/stdc++.h>

using namespace std;

int main()
{
  string s = "572305729898";
  sort(s.begin(), s.end(), greater<int>()); // 2 arguments pass karne ka hai ek ye sort wala argument dusra ye greater int wala argument
  cout<<s<<endl;
  return 0;
  }


//author :shreyamalogi

/*

largest rectanglular area in a histogram

Find the largest rectangular area possible in a given histogram where the largest rectangle can be made of a number of contiguous bars. For simplicity, assume that all bars
 have same width and the width is 1 unit.

brute force

int ans=0, n=a.size();
for(int i=0;i<n;i++){
	int minh=inf;
for(int j=i;j<n;j++){
	minh=min(a[j],minh);
	int len=j-i+1; //width
	ans=max(ans,len*minh); //area=len*minh
	}
}
cout<<ans;
*/



/* 

stack approach
potential area and pop till stack elements are greater


*/

#include<bits/stdc++.h>

using namespace std;

int get_max_area(vector<int> a){
	int n= a.size();
	int ans=0;
	int i=0;
	stack<int>st; 
	
	a.push_back(0); //alag se stack ko hadle nai karna parega
	while(i<n){
		while(!st.empty() and a[st.top()] > a[i]){
			int t = st.top();
			int h = a[t];
			st.pop();
			
			if(st.empty()){
				ans=max(ans, h*i);
			}
			else{
				int len = i -st.top()-1;
				ans=max(ans, h*len);
			}
		}
		st.push(i);
		i++;
	}
	return ans;
}

int main()
{
	vector<int> a = {2,1,5,6,2,3};
	cout<<get_max_area(a);
     return 0;
}

//10


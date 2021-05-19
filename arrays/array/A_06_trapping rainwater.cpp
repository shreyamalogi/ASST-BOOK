//author :shreyamalogi

/*
trapping rainwater harvesting

Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much
water it is able to trap after raining.


brute force and dry run
R :               	3 3 3 3 3 3 3 3 2 2 2 -
L :               	-  0 1 2 2 2 2 3 3 3 3 3 
min(L,R):   		0 0 1 2 2 2 2 3 2 2 2 0

*/


#include<bits/stdc++.h>

using namespace std;

int rain_water(vector<int> a){
	stack<int> st;
	int n=a.size(), ans=0;
	
	for(int i=0;i<n;i++){
		while(!st.empty() and a[st.top()] < a[i]){
			int t = st.top();
			st.pop();
			if(st.empty()){
				break;
			}
			int diff = i-st.top()-1; //ye length hojayegi container ki
			ans += (min(a[st.top()], a[i]) - a[t]) * diff; //min of l;eft and right walls
			
		}
		st.push(i);
	}
	return ans;
}

int main()
{
	vector<int> a = {0,1,0,2,1,0,1,3,2,1,2,1};
	cout<<rain_water(a);
     return 0;
}
//6

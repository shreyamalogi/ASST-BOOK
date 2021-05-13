//author :shreyamalogi

//max consequtive ones

//given an array A of os and 1s, we may change up to k values from 0 to 1
//return the length of the longest(contiguos) subbaray that contains only 1s


//idea:
//find the longest subarray with atmost k zeroes
//for each a[j], try to find the longest subarray
//if a[j]~a[j] has zeroes <=k, we continue to increment j
//if a[i]~a[j] has zeroes>k, we increment i (as well as j) shrink the window


#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n; cin>>n;
	int k; cin>>k;
	vector<int> a(n);
	for(auto &i : a) cin>>i;
	
	//a[i...j]
	//a[i...j+1] //when j is increasing window ka size is also increasing
	//a[i+1.j]   //when i is increasing window ka size is decreasing
	
	int zerocnt=0, i=0, ans=0;
	for(int j=0;j<n;j++){
		if(a[j]==0)
			zerocnt++;  
		while(zerocnt>k){
			if(a[i]==0){
				zerocnt--; //if it is not satisfying toh decrease the window ka size
				
			}
			i++;  //to shrink the size
		}
		//zerocnt <k
		ans = max(ans,j-i+1); //update the ans
	}
	cout<<ans;
     return 0;
}

//
//5 2
//1 1 0 0 1

//5
//if we keep 1's in zeroes places we get 11111 which is true


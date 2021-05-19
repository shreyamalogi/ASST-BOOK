//author :shreyamalogi

/*

sliding window maximum with n(log n)

*/


#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,k;
	cin>>n>>k;
	vector<int> a(n);
	for(auto &i : a) cin>>i;
	
	multiset<int, greater<int>> s; //so that greater element will be maximum at top
	vector<int> ans;  //array for storing our ans;
	for(int i=0;i<k;i++) {//iterate till k
		s.insert(a[i]); //and insert our element
	}
	
	ans.push_back(*s.begin()); //it is its value
	for(int i=k; i<n; i++) {   //iterate for the rest of the elements
		s.erase(s.lower_bound(a[i-k]));  //the element went of but we must also deleete from the set
		s.insert(a[i]); //now it will include in the window
		ans.push_back(*s.begin());
	}
	
	for(auto i : ans)
		cout<<i<<" ";
     return 0;
}


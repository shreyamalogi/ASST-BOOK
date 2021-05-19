//author :shreyamalogi

/*

o(n) tc
silding window maximum

*/


#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,k;
	cin>>n>>k;
	vector<int> a(n);
	for(auto &i : a) cin>>i;
	
	deque<int> q;
	vector<int> ans;
	for(int i=0; i<k; i++){
		while(!q.empty() and a[q.back()] < a[i]){  //
			q.pop_back();
		}
		q.push_back(i);
	}
	
	ans.push_back(a[q.front()]); //for first wondow and we are pushing only indices not elements
	for(int i=k; i<n; i++){
		if(q.front()== i-k){
			q.pop_front();
		}
		
		while(!q.empty() and a[q.back()] < a[i]){
			q.pop_back();
		}
		q.push_back(i);
		ans.push_back(a[q.front()]);
	}
	for(auto i : ans)
		cout<<i<<" ";
	cout<<endl;
	
     return 0;
}


//6 2
//3 4 9 1 -4 10 (2 and 4 ka max hua 4. 4 and 9 ka mx hua 9....

//4 9 9 1 10



//9 3
//1 3 5 3 2 7 9 3 -7
//5 5 5 7 9 9 9


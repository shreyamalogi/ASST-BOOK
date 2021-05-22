
//author :shreyamalogi
//q: given an array of distinct integers return all the possible permutations 

//permutations are arrangements of how many nos
//ex: [1,2,3]=6! (6 type of arrangements as...)
//output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]

//idea: you are at index idx, try all the possible swap ensuring you dont produce duplicates
//time complexity generally will be o(n!) 


#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> ans;   //globally declaring so that we dont pass it again all the time
void permute(vector<int> &a,int idx){
	if(idx==a.size()){     //base case
		ans.push_back(a);   //ans me daldenge a ko
		return;	
	}
	for(int i=idx; i<a.size(); i++){
		swap(a[i],a[idx]);
		permute(a, idx+1);
		swap(a[i],a[idx]);
	}
	return;
}

int main()
{
	 int n;
	 cin>>n;
	 vector<int> a(n);    //n hoga vector ka size
	 	for(auto &i : a)  //n integers ka input lena
	 		cin>>i;  
		permute(a,0);	  //initially at 0  
		for(auto v : ans){
			for(auto i: v)
				cout<<i<<" " ;    //printing elemets
			cout<<endl;
		}  
		 
		     
     return 0;
}

//3
//3 2 1

//3 2 1
//3 1 2
//2 3 1
//2 1 3
//1 2 3
//1 3 2


//author :shreyamalogi

//three sum prob

//given an array and a value, find if there exists three numbers 
//whose sum is equal to the given value


//brute force: try out all the combinations
//for(int i=0;i<n;i++)
//	for(int j=i+1;j<n;j++)
//		for(int k=j+1;k<n;k++)
//			if(a[i]+a[j]+a[k]==target)
//				found=true
//				
//				TC: O(N^3)

//BUT FOR OPTIMAL WAY WE USE TWO POINTER TECHNIQUE

//sort the array
//traverse the array and fix the element of the triplet.
//the prob reduces to find if there exists two elements having sum equal to x-a[i]
//TC: O(N^2)

#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n; cin>>n;
	int target; cin>>target;
	vector<int> a(n);
	for(auto &i : a) cin>>i;
	
	bool found = false;
	sort(a.begin(),a.end());	//first sort 
	
		for(int i=0;i<n;i++){
			int l= i+1, r=n-1;  //lower bound and upper bound 
			while(l<r){
				int curr = a[i]+a[l]+a[r];
				if(curr==target){
					found=true;
				}
				//warna 2 cases hosakthe
				if(curr<target)
					l++;			//l will increase
				else
					r--;			//r will decrease
			}
		}
		if(found)
			cout<<"true";
		else
			cout<<"false";
		
     return 0;
}


//6 24
//12 3 6 9 34 25
//true

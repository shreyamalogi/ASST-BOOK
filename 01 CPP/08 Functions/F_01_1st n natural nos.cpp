//author :shreyamalogi

//SUM OF FIRST N NATURAL NUMBERS


//eg: ans += i; is like your friend keeping track of the total number of candies. 
//The += means "add and update." So, every time your friend sees a new candy (represented by i), 
//he adds it to his total.


// int sum(int n) {
//     // The formula for the sum of the first n natural numbers is n * (n + 1) / 2
//     return n * (n + 1) / 2;
// }


// ans = ans + i


#include<bits/stdc++.h>

using namespace std;



int sum(int n){
	int ans =0;
	for(int i=1;i<=n;i++)
		ans += i;
	return ans;
}


int main()
{
	int n;
	cin>>n;
	
	cout<<sum(n)<<endl;
     return 0;
}

//5
//15.


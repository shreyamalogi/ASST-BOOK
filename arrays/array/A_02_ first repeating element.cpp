//author :shreyamalogi
// first repeating element

//IDX ARRAY IS a[i], normal array is i

#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) 
	{
		cin>>a[i];	
	}
	
	
	const int N = 1e6+2;  //10 power 6, const is cuz we cant change n ki value
	int idx[N];       //DECLARING OUR IDX ARRAY OF SIZE CAPITAL N
	for(int i=0; i<N; i++) 
	{
		idx[i] =-1; //initializing index i with -1
	}
	
	//declaring our minimum index and initialize with a very large value
	
	int mnidx=INT_MAX;
	
	for(int i=0; i<n; i++)
	{
		if(idx[a[i]] != -1) //if idx of a[i] is not eqal to -1
		{
			mnidx = min(mnidx, idx[a[i]]);  //minindex me minimize karke ,update kardo
		}
		else
		{
			idx[a[i]] = i; //idx of ai me i daldo cuz pehle -1 tha na
		}
	}
	
	//agr min index mila itch nai
	if(mnidx==INT_MAX) //if min index barabar intmax
	{
		cout<<"-1"<<endl;
	}
	else
	{
		cout<<mnidx + 1<<endl;
	}
	
	
    return 0;
}

//7
// 1 5 3 4 3 5 6

//2


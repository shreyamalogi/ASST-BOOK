//author :shreyamalogi
//subarray with given sum

#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,s;
	cin>>n>>s;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	
	int i=0, j=0, st=-1, en=-1, sum=0;  //2 pointer approach
	while(j<n && sum+a[j]<= s)
	{
		sum+= a[j]; //sum me add karo
		j++;
	}
	
	if(sum==s) //mtlb ans mil chuka hai toh cout
	{
		cout<<i+1<<""<<j<<endl ; //output it from i+1
		return 0;
	}
	
	while(j<n)
	{
		sum+=a[j];
		while(sum>s)
		{
			sum -=a[i];
			i++;
		}
		if(sum==s)
		{
			st=i+1;
			en=j+1;
			break;
		}
		j++;
	}
	cout<<st<<" "<<en<<endl;
     return 0;
}

//5 12
//1 2 3 7 5
//2 4


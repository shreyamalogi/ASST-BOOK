//author :shreyamalogi

//binary search algo
//TC : O(log n base2)


#include<bits/stdc++.h>

using namespace std;

int binarysearch(int a[], int n, int k){
	int s=0;								//define our staring and ending
	int e=n;								// 0 till n
	while(s<=e){							//ye kaam jb tk karna hai jb tk hamara start is less than e
		int mid=(s+e)/2	;					//mid ka index miljayega
		
		if(a[mid]==k)						//if array of mid key k barabar h toh return mid, jo uska index h
		{
			return mid;	
		} 
		else if(a[mid]>k){					//agr key is less than array of mid, move the end pointer to left which is mid-1
		e=mid-1;
		}
		else{								//agr waise b nai hua toh
			s=mid+1;						//move start pointer to mid+1
		}
	}
	return -1;								//agr ye while loop khatam hojatha hai aur apan kuch b nai return karthe h toh return -1
}
		


int main()
{
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	
	cout<<binarysearch(a,n,k)<<endl;
	
     return 0;
     
}




//5 40
//10 20 30 40 50

//3


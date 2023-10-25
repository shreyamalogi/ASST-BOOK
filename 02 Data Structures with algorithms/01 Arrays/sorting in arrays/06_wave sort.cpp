//author :shreyamalogi

/*

wave sort

a[0]>=a[1]<=a[2]>=a[3]<=a[4]

big small big small big....

algo two iterations in one loop

for i=1 to n-1
{
 if a[i]>a[i-1]
 	swap(arr,i,i-1)
 	
 if arr[i]>arr[i+1] && i<= n-2 // jump
	swap(arr,i,i+1)
	
	i+=2 //incr by 2 due to alternating
}

*/


#include<bits/stdc++.h>

using namespace std;

void swap(int a[], int i, int j){
int temp = a[i];
a[i]=a[j];
a[j]=temp;
}

void wavesort(int a[], int n){
	for(int i=1; i<n; i+=2){
		
		if (a[i]>a[i-1])
			swap(a,i,i-1);
		
		if (a[i]>a[i+1] && i<=n-2)
			swap(a,i,i+1);
	}
}


int main()
{
	int a[]={1,3,4,7,5,6,2};
	
	for(int i=0;i<7;i++){
		cout<<a[i]<<" ";
	}
     return 0;
}
//
//1 3 4 7 5 6 2


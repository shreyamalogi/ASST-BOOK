//author :shreyamalogi
//sum of all subarrays
//approach: iterate over all the subarrays with nested loop
//dry run : at first both i and j will eb pointing on 1st index then j pointer will move forward and break and bahar wala loop increment maarega tab i will point to next element and j will go on till n-1 then break then outer loop inc the same procedure

//SUBARRAY VS SUBSEQUENCES
//SUBARRAY: continuous part of the array.....
//formula: no of subarrays of an array with n elements = nC2+n*(n+1)/2
//SUBSEQUENCE: it is not continuos part by must maintain order / A subsequence is a sequence that can be derieved an array by selecting zero or more elements without changing the order of the remaining elements
//formula : no. of subsequences of an array is 2 power n


#include<bits/stdc++.h>

using namespace std;

int main()
{
	 int n;
	 cin>>n;
	 int a[n],i,j;
	 for(i=0;i<n;i++)
	 cin>>a[i];
	 
	 //har kisi sub array ka sum
	 
	 int cur=0;           //initialize current jo sum store karega
	 for(i=0;i<n;i++){    //outer loop (nested)
	 	cur=0;            //declare current sum with 0
	 	for(j=i;j<n;j++){ //inner loop
	 		cur+=a[j];    //current me plus kardenge a[j]
	 		cout<<cur<<endl;
		 }
	 }
     return 0;
}


//5
//1 2 0 7 2

//1
//2
//0
//7
//2
//2
//0
//7
//2
//0
//7
//2
//7
//2
//2

//n*n+1/2 = 5*5+1/2 = 15


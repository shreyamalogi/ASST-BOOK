//MAX TILL I
//given an array of size n, for every i from 0 to n-1
//outpur max(a[0], a[1], ..... a[i]

//author :shreyamalogi


//approach:   keep a variable mx which stores the maximum till ith element
 //           iterate over the array and update
 //dry run :  move the pointer and compare with the next and check which is maximum and update the maximum
 
#include<bits/stdc++.h>

using namespace std;

int main()
{
	int mx=-1999999;    //give any small value so that we can find the maximum value
	int n;
	cin>>n;
	int a[n],i;
	for(i=0; i<n; i++)
		cin>>a[i];
	
	//main logic	
	for(i=0; i<n; i++){
		mx = max(mx,a[i]);   // we send in 2 arguments in max function max till a[i] or update it
		cout<< mx <<endl;
	}
		
     return 0;
}

//input
//6
//0 -9 1 3 -4 5
//
//output (compare btw 0 and -9 and check which is max val)
//0
//0
//1
//3
//3
//5


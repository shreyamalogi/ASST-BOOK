//author :shreyamalogi

//an array is a list of variables of same similar type
//it is single block of memory with partitions
// starts from 0th index....we can acces thru index number eg: "shreya", now u want h so arr[1] will give u "h"
//anything inside [] means index accessing thru index numbers
//syntax: datatype arrayname[size];

// i in loop is like a counter which goes from 0 to n
//i in arr[i] is the iterator, it checks for arr[0], checks, arr[1], etc..till arr[n] until codition is satified

//arr[i] (Array Indexing):
// arr is an array, and i is an index representing a position in the array.
// arr[i] refers to the element at index i in the array arr.
// It allows you to access or modify the value stored at that particular position in the array.

// a[i] ...eg:..loop runs from i = 0 to i = 4, and with each iteration, it prints the value of a[i]. 
//So, if the values of i are 0, 1, 2, 3, and 4 during each iteration of the loop. The loop allows you to go
//through each element of the array one by one, and i helps you keep track of which element you are currently looking at.

//limitations: fixed size, contiguous blocks of memory stored at any random memory loaction in cpu, 
// insertion or deletion is costly

#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;		//declare size of the input array
	cin>>n;  	//take in the size
	int arr[n]; 	 //declare array of size n

	//full array input
	for(int i=0; i<n;i++) 	cin>>arr[i]; 				
	   
	//full array output 
	for(int i=0; i<n;i++) 	cout<<arr[i]<<" "; 	
	
     return 0;
}

//5
//12 34 2 4 67
//12 34 2 4 67


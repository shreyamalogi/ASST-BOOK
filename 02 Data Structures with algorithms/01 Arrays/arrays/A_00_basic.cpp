//author :shreyamalogi

//an array is a list of variables of same similar type
//it is single block of memory with partitions
// starts from 0th index....we can acces thru index number eg: "shreya", now u want h so s[1] will give u "h"
//anything inside [] means index accessing thru index numbers
//syntax: datatype arrayname[size];

//limitations: fixed size, contiguous blocks of memory stored at any random memory loaction in cpu, 
// insertion or deletion is costly

#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;		//declare size
	cin>>n;  	//take in the size
	int a[n]; 	 //declare array of size n
	//cin>>a[0]; cin>>a[1]....
	//but
	for(int i=0; i<n;i++) 	//here i is just a variable nothing to do with it....but it goes from array of 0 to n
	cin>>a[i]; 				//full array kosam 
	   
	for(int i=0; i<n;i++) 	//here i is just a variable nothing to do with it....but it goes from array of 0 to n
	cout<<a[i]<<" "; 				//full array kosam 
     return 0;
}

//5
//12 34 2 4 67
//12 34 2 4 67


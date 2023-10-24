//find the first and last occurence of a number in an array
// eg: {4,2,1,2,5,2,7} ex 2 at what index

#include<iostream>

using namespace std;

int fo (int arr[], int n, int i, int key){
	
	if(i==n){
		return -1;
	}
	
	if(arr[i]==key){
		return i;
	}
	return fo(arr,n,i+1,key);
}

int main()

{
    int arr[]={4,2,1,2,5,2,7};
	cout<<fo(arr,7,0,2)<<endl;	
	return 0;
}

//output is 1 as the index of first occurence of the key i.e 2 is 1

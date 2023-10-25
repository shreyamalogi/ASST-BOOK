//author :shreyamalogi


//insertion sort: we take an element from the unsorted and try to inserted in its real position in the sorted array 
//(for loop lo while loop)

//first part 'j' sorted, 2nd part 'i' is unsorted...(no swaping here but take a current variable and shift it so that the first element wont be lost)

//take from 1nd element (index=1)
//take a current variable and j variable for comparision
//TC : O(n^2)

#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	
	for(int i=1;i<n;i++){				//outer loop goes from 1 to n
		int c=a[i];
		int j=i-1;
		
		while(a[j]>c && j>=0){		//tip: no i in while loop
			a[j+1]=a[j]; 			//shift 1 posision
			j--;					//keep in mind j should not be negative so keep condition j is more than 0
		}
		a[j+1] = c;
	}

	//print the array
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}cout<<endl;	
     return 0;
}

//5
//7 4 2 8 1
//1 2 4 7 8


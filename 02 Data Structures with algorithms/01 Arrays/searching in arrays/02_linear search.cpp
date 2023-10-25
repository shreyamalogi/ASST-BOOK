//author :shreyamalogi

//linear search algo
//tC : O(n)

#include<bits/stdc++.h>

using namespace std;

int linearsearch(int a[], int n, int k){
		for(int i=0;i<n;i++) {	//traverse karo pura array
			if(a[i]==k)	{		//check if array is equal to key
				return i;		//i is the index	//cout<<i<<endl;
			}
		}
		return -1;          	//if we dint get the desired value
	}
			

int main()
{
	int i,n,k;    //k is the key elememt we need to find
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	cout<<linearsearch(a,n,k)<<endl;
     return 0;
}

//5 37
//10 20 37 45 67

//2 (37 is at index 2)

//5 78
//5 6 7 8 33

//-1 (index not found)


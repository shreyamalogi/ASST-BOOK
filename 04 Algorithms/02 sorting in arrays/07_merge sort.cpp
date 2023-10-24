//author :shreyamalogi

/*

merge sort 
divide and conquer algo

	if(l<r){
	int mid = (l+r)/2;
	mergesort(arr,l,mid);
	mergesort(arr,mid+1;r)
	
	merge(arr,l,mid,r);
	}

*/


#include<bits/stdc++.h>

using namespace std;

void merge(int arr[], int l, int mid, int r){
	
	int n1=mid-l+1; //size
	int n2=r-mid;
	
	int a[n1]; //temp arrays
	int b[n2];
	
	for(int i=0;i<n1;i++) a[i]=arr[l+i];
	for(int i=0;i<n2;i++) b[i]=arr[mid+1+i];
	
	
		int i=0,j=0,k=l;
		while(i<n1 && i<n2){
			if(a[i] <= b[j]){
				arr[k]=a[i];
				k++; i++;
			}
			else{
				arr[k]=b[j];
	
				k++;j++;
				
			}
		}
		
		//jb i last tk nahi pahuta hai
		while(i<n1){
			arr[k]=a[i];
			k++; i++;
		}
		//jb j last tk ni pahunta h
		while(j<n2){
			arr[k]=b[j];
			k++; i++;
		}
	
	
	
}

void mergesort(int arr[], int l, int r){
	if(l<r){
		int mid = (l+r)/2;
		mergesort(arr,l,mid);
		mergesort(arr,mid+1,r);
		
		merge(arr,l,mid,r);
	}
}

int main()
{
	int arr[]={5,4,3,2,1};
	mergesort(arr,0,4);
	for(int i=0;i<5;i++){
	cout<<arr[i]<<" ";
	}
	cout<<endl;
     return 0;
}

//1 2 3 4 5


//author :shreyamalogi

//DIVIDE AND CONQUER ALGO
//apply partition()	function
//pi means pivot
//tc : depends on pivot
//in best case,pivot would be median
//in worst case pivot would be end element


//partition algo
//Partition(a[],l,r){
//	pivot=a[r];
//	i=l-1
//	for j=l to r-1
//	if(a[j]<pivot)
//	i++;
//	swap(i,j)
//	
//	swap(i+l,r)
//	return i+1
//}



//algo
//quicksort(a[],l,r){
//	if(l<r){
//		int pi= partition(a[],l,r)
//	
//	quicksort(a[],l,pi-1) //l to pi-1
//	quicksort(a[],pi+1,r) //pi+1 to l
//	}
//}


#include<bits/stdc++.h>

using namespace std;

int swap(int a[], int i, int j) //i and j are index
{
	int temp = a[i];
	 a[i]=a[j];
	 a[j]=temp;
}

int partition(int a[], int l, int r){
	int pivot=a[r];
	int i=l-1;
	
	for(int j=l; j<r; j++){
		if(a[j]<pivot){   	//if yes
			i++;			//incr and
			swap(a,i,j);		//swap
		}
	}
	swap(a,i+1,r);			//swap i+1 WITH R
	return i+1;
}


void quicksort(int a[], int l, int r){
	if(l<r){
		int pi = partition(a,l,r);
		quicksort(a,l,pi-1);
		quicksort(a,pi+1,r);
	}
}



int main()
{
	int a[5]={5,4,3,2,1};
	quicksort(a,0,4);
	for(int i=0;i<5;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
     return 0;
}

//1 2 3 4 5


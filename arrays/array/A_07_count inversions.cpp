//author :shreyamalogi

/*

rute force:
int inv =0;
for(int i=0;i<n;i++){
	for(int j=i+1;j<n;j++){
		if(a[i]>a[j])
			inv++;
		}
	}
	cout<<inv; o(n2)
	
	merge and inversion
	as inversions are many store it in long long

*/


#include<bits/stdc++.h>

using namespace std;

long long merge(int a[], int l, int mid, int r){
		long long inv=0;
		int n1 = mid-l+1; //size of left sorted
		int n2 = r-mid;   //size of right sorted int n2 = r- (mid+1) +1;
		 
		int c[n1]; 
		int b[n2];  //temporary arrays
		for(int i=0;i<n1;i++) a[i] = a[l+i];
		for(int i=0;i<n2;i++) b[i] = a[mid+i+1];
		
		int i=0,j=0,k=1;
		while(i<n1 && i<n2){
			if(c[i] <= b[j]){
				c[k]=c[i];
				k++; i++;
			}
			else{
				c[k]=b[j];
				inv+= n1-i; //important step
				//a[i], a[i+1]...> b[j] and i<j
				k++;j++;
				
			}
		}
		while(i<n1){
			c[k]=c[i];
			k++; i++;
		}
		while(j<n2){
			c[k]=b[j];
			k++; i++;
		}
		return inv;
}

long long mergesort(int a[], int l, int r){
		long long inv=0;
		if(l<r){	//l to r
			int mid=(l+r)/2; //mid means avg
			inv += mergesort(a,l,mid); //check the inversions in left wala part;
			inv += mergesort(a,mid+1,r); //check the inversions in right wala part
			inv += merge(a,l,mid,r); //merge the two sorted arrays
			
		}
}

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	cout<<mergesort(a,0,n-1);
     return 0;
}


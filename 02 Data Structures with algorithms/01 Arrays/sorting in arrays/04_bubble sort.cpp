//author :shreyamalogi

//bubble sort: we say it bubble sort cuz the max element comes up like bubble

//repeatedly swap 2 adjacent elements if they are in wrong order
//l>r= wrong order

//we have to do n-1 iterations before we get our sorted array

//1st iteration = n-1
//2nd iteration = n-2....so on
//ith iteration = n-i


#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	
	//for iterations lets take a variable counter
	
	int cnt = 1;
	while(cnt<n-1){
		for(int i=0;i<n-cnt;i++){
			if(a[i]>a[i+1]){
				int temp = a[i];   //to swap
				a[i]=a[i+1];
				a[i+1]=temp;
			}
		}
		cnt++;					//so that it moves to next iteration
	}
	
	//print the array
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
     return 0;
}

//
//5
//6 3 8 2 4
//2 3 4 6 8

//author :shreyamalogi

//given 2d array of sizes n1xn2 and n2xn3

//aproach: make a nested loop of order3. in the outer loop iterate over
//rows of first matrix and in the inner loop iterate over the coloums of the second matrix
//multiply rows of first matrix with coloums of second matrix in the innermost loop and update the answer


#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n1,n2,n3;
	cin>>n1>>n2>>n3;
	
	int m1[n1][n2];
	int m2[n2][n3];
	
	//input our first 2d array
	for(int i=0;i<n1;i++)
	{
		for(int j=0;j<n2;j++)
			cin>>m1[i][j];
	}
	
	//input our 2nd 2d array
	for(int i=0;i<n2;i++)
	{
		for(int j=0;j<n3;j++)
			cin>>m2[i][j];
	}
	
	//ans array n1 cross n2
	int ans[n1][n3];
		for(int i=0;i<n1;i++)
	{
		for(int j=0;j<n3;j++)
			ans[i][j]=0;
	}
	
	//main wala code
	for(int i=0;i<n1;i++)
	{
		for(int j=0;j<n3;j++)
		{
			for(int k=0;k<n2;k++)
			{
				ans[i][j] += m1[i][k] * m2[k][j];
			}
		}
	}
	for(int i=0;i<n1;i++)
	{
		for(int j=0;j<n3;j++){
			cout<<ans[i][j]<<" ";
		}
		cout<<endl;
		
	}
     return 0;
}

//first 3x4 then 4x3 = 3 4 3
//3 4 3
//2 4 1 2
//8 4 3 6
//1 7 9 5
//1 2 3
//4 5 6
//7 8 9
//4 5 6

//output will be 3x3
//33 42 51
//69 90 111
//112 134 156


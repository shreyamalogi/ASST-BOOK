//solid rhombus pattern 


//6
//    *****
//   *****
//  *****
// *****
//*****

//note : rows       : 1 to n
//       coloums 1  ; [to print space] is n-row number i.e n-i
//       coloumn 2  ; 1 to n .


#include<iostream>

using namespace std;

int main()
{
	int n;
	cin>>n;
	
	for(int i=1; i<n; i++)
	{
		for(int j=1; j<n-i; j++){
			cout<<" ";
		}
		for( int j=1; j<n; j++){
			cout<<"*";
		}
		cout<<endl;
	}
	return 0; 
}

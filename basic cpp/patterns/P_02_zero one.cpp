//0-1 pattern

// 1
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1

// note -   rows : 1 to n
//          coloumn : 1 to row number
//          element : row no + column no, if even print 1, if odd print 0
#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
    for(int i=1; i<=n; i++){
  	for(int j=1; j<=i; j++){
  		if((i+j)%2==0){
  			cout<<" 1";
		  }
		else{
			cout<<" 0";
		}  
	  }
	  cout<<endl;
  } 
  return 0;	
}

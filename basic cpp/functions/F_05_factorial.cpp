//FACTORIAL

//n!=n*n-1*n-2*n-3.....x1
//eg:3! = 1*2*3

#include<iostream>
#include<math.h>

using namespace std;

int fact(int n){
	int factorial=1;
	for(int i=2; i<=n; i++){
		factorial=factorial*i;
	}
	return factorial;
}


int main(){
	
	int n;
	cin>>n;
	
	int ans = fact(n);
	cout<<ans<<endl;
	return 0;
}


//author :shreyamalogi

//pass by ref

#include<bits/stdc++.h>

using namespace std;

swap(int *a, int*b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
//swap(int a, int b){
//	int temp = a;
//	a = b;
//	b = temp;
//}

int main()
{
	int a=2;
	int b=4;
	
	int *aptr=&a;
	int *bptr=&b;            //without using 2 lines we can access adress
	
	swap(aptr,bptr);         //or &a, &b
	cout<<a<<" "<<b<<endl;		//4 2
	
	
//	swap(a,b);
//	cout<<a<<" "<<b<<endl; 		//2 4
	
     return 0;
}


//author :shreyamalogi
//pointers and arrays

#include<bits/stdc++.h>

using namespace std;

int main()
{
	//by using array
	int a[]={10,20,30};
	cout<<*a<<endl;				//10 which is 0th element
	
	//by using pointer
	int *ptr=a;
	for(int i=0;i<3;i++)		//pointer k madad se pura array print karwana
		{
			cout<<*ptr<<endl;
			ptr++;				//ye 4 bytes aagae chalajayega and we get our 2nd lement which is 20
		}
    return 0;
}


//arr++ is illegal


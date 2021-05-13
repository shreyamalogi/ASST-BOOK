//add all numbers till n

//1+2+3+4+5+6+7=28

#include<iostream>

using namespace std;

int sum(int n){
	if (n==0)                 //base case where ek condition dalthe rokhne ke liyae
	{
		return 0;        //if input is 0 it wil return 0
	}
	int prevSum = sum(n-1);    //n-1 ka sum, prevsum me store hojayega
	return n + prevSum;         //7 + (7-1) = //7+6
}


int main()
{
	int n;
	cin>>n;
	cout<<sum(n)<<endl;
	return 0;
}



//input 7
//output 28


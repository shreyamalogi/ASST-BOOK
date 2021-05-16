//LOGIC
//
//24 = 2*2*2*3
//42 = 2*3*7
//COMMON = 2*3=6
//
//42-24=18
//24-18=6
//18-6=12
//12-6=6
//6-6=0
//
//OR
//
//42%24=18
//24%18=5
//18%6=0

//number theory

#include<iostream>
using namespace std;

int gcd(int a, int b){
	while(b!=0){                  //jb tk b ki value 0 nai hoti
   	  int rem=a%b;              //me sabse pehle remainder find out karungi
   	  a=b;                     //a me b ki value dalenge
   	  b=rem;                   //aur b me remainder ki value
   }
   return a; 
}
                //jb hamara b ki value 0 hojayega toh apan return karenge a ki value

int main()
{
	int a,b;                  //declare a and b
	cin>>a>>b;                //user se input lelete
	cout<<gcd(a,b)<<endl;     //output ko print kare
	return 0;
}

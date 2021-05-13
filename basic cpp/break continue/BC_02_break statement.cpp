//author :shreyamalogi

/*
break statement is used to terminate a loop


*/


#include<bits/stdc++.h>

using namespace std;

int main()
{
	int pocketMoney=3000;
	for(int i=1; i<=30; i++){ 	//date in month from 1 to 30
	if(i%2==0)
		continue;				//continue hit hothe hi, jo hamara next statement hai go out vo execute nahi hogi, we will skip to the next iteration
		
	if(pocketMoney==0)			//when pocket money becomes zero we come outta the loop
		break;

	else
		cout<<"go out"<<endl;
		pocketMoney = pocketMoney - 300;  //jis din neha will go out we will subtract 300 from her total pocket money
	}
     return 0;
}


//go out
//go out
//go out
//go out
//go out
//go out
//go out
//go out
//go out
//go out

//in 10 days her money will become 0, so she cant go out the next more 5 days


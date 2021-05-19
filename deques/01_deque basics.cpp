//author :shreyamalogi

/*

deque: double ended queue
mix of stacks and queues

push and pop from the end
insert and delete from the start
header file<deque>

*/


#include<bits/stdc++.h>

using namespace std;

int main()
{
	deque<int> dq;
	dq.push_back(1);
	dq.push_back(2);
	dq.push_front(3);
	dq.push_front(4);
	for(auto i : dq)
		cout<<i<<" ";
	cout<<endl;	
     return 0;
}

//4 3 1 2

//author :shreyamalogi

/*



*/


#include <iostream>
#include <set>
using namespace std;

int main(){
    multiset<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(2);
    for(auto i:s){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<s.size()<<endl;
    s.erase(s.find(2));//to delete one and the first element where its found
    for(auto i:s){
        cout<<i<<" ";
    }
    return 0;
}

//1 2 2 3
//4
//1 2 3


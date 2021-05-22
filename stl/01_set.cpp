//author :shreyamalogi

/*



*/



#include <iostream>
#include <set>
using namespace std;

int main(){
    set<char> s;
    s.insert('a');
    s.insert('d');
    s.insert('d');
    s.insert('a');
    for(auto i:s){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<s.size()<<endl;
    s.erase(2);
    for(auto i:s){
        cout<<i<<" ";
    }
    return 0;
}

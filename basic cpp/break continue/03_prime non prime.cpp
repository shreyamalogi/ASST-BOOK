//author :shreyamalogi

/*



*/


#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin>>n;
    bool flag=0;

    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            cout<<"Non-Prime"<<endl;
            flag=1;
            break;
        }
    }

    if(flag==0){
        cout<<"Prime"<<endl;
    }


    
    return 0;
}

//
//5
//Prime


//9
//Non-Prime


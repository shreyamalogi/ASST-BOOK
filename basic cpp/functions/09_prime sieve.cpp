//author :shreyamalogi

/*

prime sieve using sieve of eratosthenes

*/


#include<iostream>
using namespace std;

void primeSieve(int n){

    int prime[100]={0};

    for(int i=2;i<=n;i++){ //satrt with 2
        if(prime[i]==0){	//checdk if unmarked
            for(int j=i*i;j<=n;j+=i){
                prime[j]=1;
            }
        }
    }

    for(int i=2;i<=n;i++){
        if(prime[i]==0){
            cout<<i<<" ";
        }
    }cout<<endl;
}


int main(){

    int n;
    cin>>n;

    primeSieve(n);
    

    return 0;
}



//30
//2 3 5 7 11 13 17 19 23 29


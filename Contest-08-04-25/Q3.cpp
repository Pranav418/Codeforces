#include<bits/stdc++.h>
using namespace std;
#define int long long int

bool isPrime(int number){

    if(number < 2) 
        return false;
    if(number == 2) 
        return true;
    if(number % 2 == 0) 
        return false;
    for(int i=3; (i*i)<=number; i+=2){
        if(number % i == 0 ) return false;
    }
    return true;

}

signed main(){

    int t;
    cin>>t;

    while(t--){
        int n, k;
        cin>>n>>k;

        if(k == 1){
            
            if(isPrime(n)){
                cout<<"YES"<<endl;    
            }
            else{
                cout<<"NO"<<endl;
            }
            continue;
        }
        else{
            if(n == 1 && k == 2)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }

    
    }
    
    return 0;
}
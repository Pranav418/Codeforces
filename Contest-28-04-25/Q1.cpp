#include<bits/stdc++.h>
using namespace std;
#define int long long int


signed main(){

    int t;
    cin>>t;
    while(t--){    
        int a, b, c;
        cin>>a>>b>>c;

        
        if((c + a - 2*b) % 3 || ((c - b + a) < b))
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;

        



    }
        


    
 
    return 0;
}
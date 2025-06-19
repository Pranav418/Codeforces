#include<bits/stdc++.h>
using namespace std;
#define int long long int



signed main(){

    int t;
    cin>>t;

    while(t--){
        int n, m, l, r;
        cin>>n>>m>>l>>r;

        int k = n - m;

        if(k == 0){
            cout<<l<<" "<<r<<endl;
            continue;
        }

        if(k <= abs(l)){
            cout<<l + k<<" "<<r<<endl;
        }
        else{
            cout<<0<<" "<<r - (k - abs(l))<<endl;
        }
            
        
        
    
    }
    
    return 0;
}
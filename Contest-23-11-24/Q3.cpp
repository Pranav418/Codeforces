#include <bits/stdc++.h>
using namespace std;
#define int long long int 

int getLimit(int x){
    int n = 1;
    while(x){
        x /= 2;
        n *= 2;
    }

    return n - 1;
}


signed main(){

    int t;
    cin>>t;

    while(t--){
        int x, m;
        cin>>x>>m;

        int n = getLimit(x);
        int count = 0;
        // cout<<"A"<<endl;
        for(int y = 1; y <= min(n, m); y++){
            // cout<<"B"<<endl;
            if(((y != x) && (y % (x ^ y) == 0)) || ((y != x) && (x % (x ^ y) == 0)))
                count++;
            
        }

        cout<<count<<endl;

    }

  
    
    return 0;
}
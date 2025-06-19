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
    
        for(int y = 1; y <= min(n, m); y++)
            if((x ^ y) % y == 0 && ((x ^ y) % x != 0))
                count++;        
        
        int p2 = n + 1;
        count += ((m/p2)*p2)/x;

        for(int y = (m/p2)*p2 + 1; y <= m; y++)
            if((x ^ y) % x == 0)
                count++;
        
        cout<<count<<endl;

    }

  
    
    return 0;
}
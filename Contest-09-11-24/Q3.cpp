#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> a(n);

        for(int i = 0; i < n; i++)
            cin>>a[i];

        vector<int> dp(n);
        vector<int> maxPrefix(n);
        int x = 1;
        maxPrefix[0] = 1;
        for(int i = 1; i < n; i++){
            if(a[i] != x)
                x += a[i] > x ? 1 : - 1;
            
            maxPrefix[i] = max(x, maxPrefix[i - 1]);
        }

        for(int i = 0; i < n; i++){
            int value = dp[i];
            if(a[i] != dp[i])
                value += a[i] > value ? 1 : - 1;
            dp[i] = max(value, maxPrefix[i]);
        }

        cout<<dp[n-1]<<endl;

    }
    return 0;
}
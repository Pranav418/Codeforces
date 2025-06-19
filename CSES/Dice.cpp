#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main(){
    
   int MOD = 1e9 + 7;
   int n;
   cin>>n;

   vector<int> dp(n + 1, 0);
    dp[0] = 0;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= 6; j++){
            if(i > j)
            dp[i] = (dp[i] + dp[i - j]) % MOD;
        }
        if(i <= 6)
            dp[i]++;
        
    }

    cout<<dp[n]<<endl;


    return 0;
}
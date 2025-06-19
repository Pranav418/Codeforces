#include<bits/stdc++.h>
using namespace std;
#define int long long int

const int MOD = 1e9 + 7;

signed main(){

    
    int n;
    cin>>n;
    vector<int> dp(n + 1, 0);
    dp[0] = 1;
    for(int i = 1; i <= n; i++){
        for(int j = max(i - 6, (long long)0); j < i; j++)
            dp[i] = (dp[i] + dp[j]) % MOD;

    } 

    cout<<dp[n]<<endl;


    


    return 0;
}
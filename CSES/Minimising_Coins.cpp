#include<bits/stdc++.h>
using namespace std;
// #define int long long int

signed main(){
    
   int n, x;
   cin>>n>>x;

   vector<int> coins(n);
   for(int i = 0; i < n; i++){
        cin>>coins[i];
   }
    

    sort(coins.begin(), coins.end());
    vector<int> dp(x+1, INT_MAX);

    for(int i = 1; i <= x; i++){

        for(int j = 0; j < n; j++){
            if(i == coins[j]){
                dp[i] = 1;
                continue;
            }
            
            if(coins[j] < i && dp[i - coins[j]] != INT_MAX)
                dp[i] = min(dp[i - coins[j]] + 1, dp[i]);
            
        }

        // cout<<dp[i]<<" ";
    }
    if(dp[x] == INT_MAX) dp[x] = -1;
    
    cout<<dp[x]<<endl;
    

    
    
    return 0;
}
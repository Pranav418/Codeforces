#include<bits/stdc++.h>
using namespace std;
#define int long long int

const int MOD = 1e9 + 7;

signed main(){

    
    int n;
    cin>>n;
    vector<string> a(n);
    
    for(int i = 0; i < n; i++)
        cin>>a[i];
    
    vector<vector<int>> dp(n, vector<int>(n, INT_MAX));

    dp[0][0] = a[0][0] == '*' ? INT_MAX : 1;
    for(int i = 1; i < n; i++){
        if(dp[0][i - 1] != INT_MAX && a[0][i] != '*')
            dp[0][i] = dp[0][i - 1];
        else
            dp[0][i] = INT_MAX;
    }

    for(int i = 1; i < n; i++){
        if(dp[i - 1][0] != INT_MAX && a[i][0] != '*')
            dp[i][0] = dp[i - 1][0];
        else
            dp[i][0] = INT_MAX;
    }

    for(int i = 1; i < n; i++){
        for(int j = 1; j < n; j++){
            if(a[i][j] == '*')
                dp[i][j] = INT_MAX;
            else if(dp[i][j - 1] == INT_MAX) 
                dp[i][j] = dp[i - 1][j];

            else if(dp[i - 1][j] == INT_MAX) 
                dp[i][j] = dp[i][j - 1];
            else
                dp[i][j] =  (dp[i][j - 1] + dp[i - 1][j]) % MOD;

        //    cout<<dp[i][j]<<" ";
        }
        //cout<<endl;
        
    }
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < n; j++){
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    int ans = dp[n-1][n-1] == INT_MAX ? 0 : dp[n-1][n-1];
    cout<<ans<<endl;

    return 0;
}
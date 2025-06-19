#include<bits/stdc++.h>
using namespace std;
#define int long long int

const int MOD = 1e9 + 7;

// int coins(vector<int>& a, int n, vector<vector<int>>& memo, int index = 0){
//     // cout<<n<<endl;
//     if(n == 0)
//         return 1;
//     if(index == a.size() || n < 0)
//         return 0;
//     if(memo[n][index] != -1)
//         return memo[n][index];

//     memo[n][index] = (coins(a, n - a[index], memo, index) + coins(a, n, memo, index + 1)) % MOD;
//     return memo[n][index];
// }

signed main(){
 
    int n, x;
    cin>>n>>x; 
    vector<int> a(n);

    for(int i = 0; i < n; i++)
        cin>>a[i];

    sort(a.begin(), a.end());

    // vector<vector<int>> dp(n, vector<int>(x + 1, -1));
    vector<vector<int>> dp(2, vector<int>(x + 1, -1));
    
    for(int i = 0; i < 2; i++)
        dp[i][0] = 1;

    for(int i = 0; i < n; i++){
        // cout<<"I: "<<endl;
        for(int j = 1; j <= x; j++){
            int notake = 0;
            int take = 0;
            if(i != 0)
                notake = dp[(i - 1) % 2][j] == -1 ? 0 : dp[(i - 1) % 2][j];
            
            if( (j - a[i]) >= 0)
                take = dp[i % 2][j - a[i]] == -1 ? 0 : dp[i % 2][j - a[i]];
            dp[i % 2][j] = (take) % MOD;
            dp[i % 2][j] = (dp[i % 2][j] + notake) % MOD;
            // cout<<dp[i % 2][j]<<" ";
        }
        // cout<<endl;
    }
    // cout<<endl;
    cout<<dp[(n - 1) % 2][x]<<endl;

    // vector<int> dp(x + 1, 0);

    // dp[0] = 1;

    // for(int i = 1; i <= x; i++){
    //     for(int j = 0; j < n; j++){
    //         if(i - a[j] < 0)
    //             break;
    //         dp[i] = (dp[i] + dp[i - a[j]]) % MOD;
    //     }
    // }

    // cout<<dp[x]<<endl;
    


    return 0;
}
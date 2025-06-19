#include<bits/stdc++.h>
using namespace std;
#define int long long int

const int MOD = 1e9 + 7;

int maxPages(vector<vector<int>>& memo,vector<vector<int>>& books, int x, int n, int index = 0){
    // cout<<x<<endl;
    if(x == 0 || index == n)
        return 0;

    if(memo[x][index] != -1)
        return memo[x][index];
    
    int ans = 0;
        
    ans = max(maxPages(memo, books, x, n, index + 1), ans);
        
    if(x - books[0][index] >= 0)
        ans = max(ans, books[1][index] + maxPages(memo, books, x - books[0][index], n, index + 1));
   
    

    // cout<<"This: "<<ans<<endl;
    memo[x][index] = ans;
    return ans;
}

signed main(){

    
    int n, x;
    cin>>n>>x;

    vector<vector<int>> books(2, vector<int>(n));

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < n; j++){
            cin>>books[i][j];
        }
    }

    vector<vector<int>> memo(x + 1, vector<int>(n, -1));
    memo[0][0] = 0;

    cout<<maxPages(memo, books, x, n)<<endl;

    vector<vector<int>> dp(x + 1, vector<int>(n + 1, 0));

    for(int i = 1; i <= n; i++){
        for(int j = 0; j <= x; j++){
            int take = 0;
            int notake = 0;

            dp[i][j] = dp[i - 1][j];
            if(j - books[0][i - 1] >= 0)
                dp[i][j] = max(dp[i][j], dp[i - 1][j - books[0][i - 1]] + books[1][i - 1]);
            // dp[i - 1][j - books[0][i - 1]]
            // cout<<dp[i][j]<<" ";
        }
        // cout<<endl;
    }
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= x; j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    // for(int i = 0; i <= x; i++){
    //     for(int j = 0; j < n; j++){


    //         if(i - books[0][j] >= 0)
    //             take = dp[i - books[0][j]][j] + books[1][j];

    //         if(i != 0)
    //             notake = dp[i - 1][j];

    //         dp[i][j] = take + notake;
    //         cout<<dp[i][j]<<" ";
    //     }
            
    //     cout<<endl;
    // }

    // cout<<dp[x][n-1]<<endl;
    


        
        
    



    


    return 0;
}
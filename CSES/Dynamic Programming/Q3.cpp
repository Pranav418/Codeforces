#include<bits/stdc++.h>
using namespace std;
#define int long long int

const int MOD = 1e9 + 7;

signed main(){

    
    int n, x;
    cin>>n>>x;
    vector<int> a(n);

    for(int i = 0; i < n; i++)
        cin>>a[i];

    sort(a.begin(), a.end());

    vector<int> dp(x + 1, 0);

    dp[0] = 1;

    for(int i = 1; i <= x; i++){
        for(int j = 0; j < n; j++){
            if(i - a[j] < 0)
                break;
            dp[i] = (dp[i] + dp[i - a[j]]) % MOD;
        }
    }

    cout<<dp[x]<<endl;
    


    return 0;
}
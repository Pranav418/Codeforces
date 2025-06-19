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

    
    for(int i = 1; i <= x; i++){
        int minimum = INT_MAX;
        for(int j = 0; j < n; j++){
            if(i - a[j] < 0)
                break;
            minimum = min(dp[i - a[j]], minimum);
        }
            
        if(minimum == INT_MAX)
            dp[i] = minimum;
        else
            dp[i] = 1 + minimum;
    }
    if(dp[x] == INT_MAX)
        cout<<-1<<endl;
    else
        cout<<dp[x]<<endl;

    


    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define int long long int

const int MOD = 1e9 + 7;

int removeDigits(vector<int>& memo, int n){
    if(n == 0)
        return 0;
    if(memo[n] != -1)
        return memo[n];
    set<int> s;
    int x = n;
    while(x){
        if(x % 10)
            s.insert(x % 10);
        x /= 10;
    }

    int value = INT_MAX;

    for(auto ele : s)
        value = min(removeDigits(memo, n - ele), value);
    

    memo[n] = 1 + value;
    return 1 + value;


}

signed main(){

    
    int n;
    cin>>n;
    vector<int> dp(n + 1, 0);

    for(int i = 1; i <= n; i++){
        set<int> s;
        int x = i;
        while(x){
            if(x % 10) s.insert(x % 10);
            x /= 10;
        }
        int value = INT_MAX;

        for(auto ele : s)
            value = min(dp[i - ele], value);
        dp[i] = 1 + value;
    }
    
    cout<<dp[n]<<endl;

    


    return 0;
}
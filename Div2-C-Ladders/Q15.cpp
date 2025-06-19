#include <bits/stdc++.h>
using namespace std;
#define int long long int 

string generateNumber(pair<int, int> x){
    string number = "";
    int a = x.first;
    int b = x.second;
    if(a == -1)
        return "-1";
    while(a--) number += "4";
    while(b--) number += "7";
    return number;
}

signed main(){

    int n;
    cin>>n;

    vector<pair<int, int>> dp(n+1);
    dp[0] = {0, 0};

    for(int i = 1; i <= n; i++){
        if(i - 4 < 0){
            dp[i] = {-1 , -1}; 
        }
        else if(i - 7 < 0){
            if(dp[i-4].first != -1)
                dp[i] = {dp[i-4].first + 1, dp[i-4].second};
            else
                dp[i] = {-1 , -1}; 
        }
        else{
            if(dp[i-4].first != -1 && dp[i-7].first != -1){
                if(dp[i-4].first + dp[i-4].second <= dp[i-7].first + dp[i-7].second){
                    dp[i] = {dp[i-4].first + 1, dp[i-4].second};
                }
                else{
                    dp[i] = {dp[i-7].first, dp[i-7].second + 1};
                }
            }
            else if(dp[i-4].first != -1){
                dp[i] = {dp[i-4].first + 1, dp[i-4].second};
            }
            else if(dp[i-7].first != -1){
                dp[i] = {dp[i-7].first, dp[i-7].second + 1};
            }
            else{
                dp[i] = {-1 , -1}; 
            }
        }
        // cout<<dp[i].first<<" "<<dp[i].second<<endl;
    }
    
    cout<<generateNumber(dp[n]);


    return 0;
}
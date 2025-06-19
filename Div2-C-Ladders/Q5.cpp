#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main(){
    int n;
    cin>>n;

    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin>>a[i];

    vector<int> freq(10e5 + 1, 0);

    int M = -1;
    for(int i = 0; i < n; i++)
        M = max(a[i], M);

    for(int i = 0; i < n; i++){
        freq[a[i]]++;
    }

    vector<int> dp(M+1, 0);

    dp[1] = freq[1];
    for(int i = 2; i < M + 1; i++){
        dp[i] = max(dp[i - 1], dp[i-2] + i * freq[i]);
    }


    cout<<dp[M];
    


    return 0;
}
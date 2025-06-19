#include <bits/stdc++.h>
using namespace std;
#define int long long int 

signed main(){

    int MOD = 1e9 + 7;
    int n, m;
    cin>>n>>m;

    vector<string> a(n);

    for(int i = 0; i < n; i++){
        cin>>a[i];
    }

    vector<int> uniqueCharacters(m);
    for(int i = 0; i < m; i++){
        unordered_set<char> hashset;
        for(int j = 0; j < n; j++)
            hashset.insert(a[j][i]);
        
        uniqueCharacters[i] = hashset.size();
    }
    int ans = 1;
    for(int i = 0; i < m; i++){
        ans = (ans * uniqueCharacters[i]) % MOD;
    }

    cout<<ans<<endl;

    return 0;
}
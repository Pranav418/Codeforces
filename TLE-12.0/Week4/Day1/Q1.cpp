#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main(){

        
        int n, m;
        cin>>n>>m;
        vector<int> a(n);
        vector<int> b(m);

        for(int i = 0; i < n; i++)
            cin>>a[i];

        for(int i = 0; i < m; i++)
            cin>>b[i];

        unordered_map<int, int> freq;

        for(int i = 0; i < n; i++)
            freq[a[i]]++;

        int ans = 0;

        for(int i = 0; i < m; i++){
            ans += freq[b[i]];
        }

        cout<<ans<<endl;
    
 
    return 0;
}
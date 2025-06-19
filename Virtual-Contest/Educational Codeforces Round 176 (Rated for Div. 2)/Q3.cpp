#include<bits/stdc++.h>
using namespace std;
#define int long long int



signed main(){

    int t;
    cin>>t;

    while(t--){
        int n, m;
        cin>>n>>m;

        vector<int> a(m);

        for(int i = 0; i < m; i++)
            cin>>a[i];

        sort(a.begin(), a.end());
        int sum = 0;

        for(int i = 0; i < m; i++)
            sum += a[i];
        
        int ans = (m - 1)*(2*sum - m*(n-1));

        cout<<ans<<endl;
    }
    
    return 0;
}
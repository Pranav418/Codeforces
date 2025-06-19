#include<bits/stdc++.h>
using namespace std;
#define int long long int


signed main(){

    int t;
    cin>>t;

    while(t--){
        int n, k;
        cin>>n>>k;

        vector<int> l(n);
        vector<int> r(n);
        vector<int> c(n);
    
        for(int i = 0; i < n; i++)
            cin>>l[i];
        
        for(int i = 0; i < n; i++)
            cin>>r[i];

        int ans = 0;

        for(int i = 0; i < n; i++){
            ans += max(l[i], r[i]);
            c[i] = min(l[i], r[i]);
        }

        sort(c.begin(), c.end(), greater<int>());
        for(int i = 0; i < k - 1; i++){
            ans += c[i];
        }

        cout<<ans + 1<<endl;
            

        
        
    }


    


    return 0;
}
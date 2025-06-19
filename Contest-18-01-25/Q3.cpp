#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main(){

    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;

        int ans = m*4;

        vector<int> x(n);
        vector<int> y(n);

        for(int i = 0; i < n; i++)
            cin>>x[i]>>y[i];

        for(int i = 1; i < n; i++){
            ans += (x[i] + y[i])*2;
        }
    

        cout<<ans<<endl;
    }

    

    
    return 0;
}
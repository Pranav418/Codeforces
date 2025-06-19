#include<bits/stdc++.h>
using namespace std;
#define int long long int
int mnv( vector<vector<int>>& a, int i, int j, int n){
    int MNV = 0;

    while(i < n && j < n) 
        MNV = min(MNV, a[i++][j++]);
    
    return -MNV;
}

signed main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<vector<int>> a(n, vector<int>(n));

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++)
                cin>>a[i][j];
        }
        
        int ans = 0;

        for(int i = 1; i < n; i++)
            ans += mnv(a, i, 0, n);

        for(int j = 0; j < n; j++)
            ans += mnv(a, 0, j, n);

        cout<<ans<<endl;
    }
    return 0;
}
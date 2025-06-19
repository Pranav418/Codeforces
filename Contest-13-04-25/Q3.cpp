#include<bits/stdc++.h>
using namespace std;
#define int long long int



signed main(){

    int t;
    cin>>t;

    while(t--){
        
        int n;
        cin>>n;

        vector<vector<int>> a(n, vector<int>(n));

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin>>a[i][j];
            }
        }

        vector<bool> b(2*n, false);
        
        vector<int> ans = a[0];
        for(int i = 0; i < n; i++){
            b[a[0][i] - 1] = true;
        }
        for(int i = 1; i < n; i++){
            ans.push_back(a[i][n - 1]);
            b[a[i][n - 1] - 1] = true;
        }
            
        for(int i = 0; i < b.size(); i++){
            if(!b[i]){
                cout<<i + 1<<" ";
                break;
            }
        }

        for(int i = 0; i < ans.size(); i++){
            cout<<ans[i]<<" ";
        }

        cout<<endl;
    
    }
    
    return 0;
}
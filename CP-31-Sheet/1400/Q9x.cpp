#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main(){

    int t;
    cin>>t;
    while(t--){    
        int n, m;
        cin>>n>>m;

        vector<vector<int>> a(m);
        vector<int> limit(n + 1, 0);
        for(int i = 0; i < m; i++){
            int x, y;
            cin>>x>>y;
            if(x > y)
                swap(x, y);
            limit[y] = max(limit[y], x);
        }

        
        int i = 1;
        int ans = 0;
        for(int j = 1; j <= n; j++){

            i = max(limit[j] + 1, i);
            ans += j - i + 1;
            
        }

        cout<<ans<<endl;
    }

        
    return 0;
        

    }
        


    
 
   

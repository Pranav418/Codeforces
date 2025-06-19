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
        
        for(int i = 0; i < m; i++){
            int x, y;
            cin>>x>>y;
            a[i] = {x, y};
        }
            
        map<int, int> Map;
        for(int i = 0; i < m; i++){
            
            int x = a[i][0];
            int y = a[i][1];
            if(x > y)
                swap(x, y);
            if(Map.find(x) != Map.end())
                Map[x] = min(y, Map[x]);
            else
                Map[x] = y;
        }

        map<int, int> limit;
        int i = 1;
        int ans = 0;
        for(int j = 1; j <= n; j++){

            int x = j;
            if(Map.find(x) != Map.end())
                limit[Map[x]]++;

            if(limit.empty() || j < limit.begin()->first )
                ans += j - i + 1;
            
            while(!limit.empty() && j >= limit.begin()->first){
                if(Map.find(i) != Map.end())
                    limit[Map[i]]--;

                if(limit[Map[i]] == 0)
                    limit.erase(Map[i]);
                i++;

                if(!(!limit.empty() && j >= limit.begin()->first))
                    ans += j - i + 1;
            }

        }

        cout<<ans<<endl;

        

    }
        


    
 
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define int long long int

void dfs(vector<vector<int>>& a, int u, vector<bool>& visited){
    cout<<u + 1<<endl;
    visited[u] = true;

    for(auto v : a[u]){
        if(!visited[v]){
            visited[v] = true;
            dfs(a, v, visited);
        }
    }

}

int maxReading(vector<vector<pair<int, int>>>& a, pair<int,int> node, vector<bool>& visited){
    
    int u = node.first;
    //cout<<u + 1<<" "<<node.second<<endl;
    visited[u] = true;

    int ans = 0;
    for(auto p : a[u]){
        int v = p.first;
        if(!visited[v]){
            visited[v] = true;
            ans = max(maxReading(a, p, visited, I, dp) + (node.second > p.second), ans);
        }
    }
    return ans;

}

signed main(){

    int t;
    cin>>t;
    while(t--){    
        int n;
        cin>>n;

        
        vector<vector<pair<int, int>>> a(n);
        vector<bool> visited(n, false);

        for(int i = 0; i < n - 1; i++){
            int u, v;
            cin>>u>>v;
            u--;
            v--;

            a[u].push_back({v, i});
            a[v].push_back({u, i});
        }

        cout<<1 + maxReading(a, {0, 0}, visited, I, dp)<<endl;

    }
        


    
 
    return 0;
}
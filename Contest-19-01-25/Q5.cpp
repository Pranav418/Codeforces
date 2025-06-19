#include<bits/stdc++.h>
using namespace std;
#define int long long int

void dfs(vector<vector<int>>& graph, int u, vector<int>& visited)

signed main(){

    
    int t;
    cin>>t;

    while(t--){
        
        int n, m1, m2;
        cin>>n>>m1>>m2;

        vector<vector<int>> F(n + 1);
        vector<vector<int>> G(n + 1);

        vector<bool> visitedF(n + 1, false);
        vector<bool> visitedG(n + 1, false);
        // map< pair<int, int>, int > H1;
        // map< pair<int, int>, int > H2;

        

        for(int i = 0; i < m1; i++){
            int x, y;
            cin>>x>>y;

            // H1[make_pair(min(x, y), max(x, y))]++;

            F[x].push_back(y);
            F[y].push_back(x);
        }

        for(int i = 0; i < m2; i++){
            int x, y;
            cin>>x>>y;

            // H1[make_pair(min(x, y), max(x, y))]--;

            G[x].push_back(y);
            G[y].push_back(x);
        }
        int ops = 0;
        for(auto ele : H1){
            ops += abs(ele.second);
        }
        cout<<ops<<endl;


        
    }
    
 
    return 0;
}
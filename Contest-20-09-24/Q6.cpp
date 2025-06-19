#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        vector<int> G[n];
        int x, y;
        for(int i = 0; i < n - 1; i++){
            cin>>x>>y;
            G[x-1].push_back(y-1);
            G[y-1].push_back(x-1);
        }
        
        int u, v;
        cin>>u>>v;
        cout<<n<<endl;

        


    }
    return 0;
}
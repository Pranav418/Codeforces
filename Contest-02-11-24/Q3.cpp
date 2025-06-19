#include <bits/stdc++.h>
using namespace std;
#define int long long int 

pair<int,int> increment(vector<vector<int>>& a, pair<int,int>& x, int layer){
    int i = x.first;
    int j = x.second;
    int n = a.size();
    int m = a[0].size();
    int end = m - layer;
    int start = layer - 1;

    // cout<<i<<" "<<j<<endl;
    if(i == start && j != end){
        return {i, j + 1};
    }
    if(j == end && i != n - layer){
        return {i + 1, j };
    }
    if(i == n - layer && j != start){
        return {i, j-1 };
    }
    return {i - 1, j};

}

int getValue(vector<vector<int>>& a, pair<int,int>& x){
    // cout<<x.first<<" "<<x.second<<endl;
    // cout<<a[x.first][x.second]<<endl;
    return a[x.first][x.second];
}

bool check(pair<int,int>& e, pair<int,int>& b, pair<int,int>& c, pair<int,int>& d, vector<vector<int>>& a){
    
    if(getValue(a, e) == 1 && getValue(a, b) == 5 && getValue(a, c) == 4 && getValue(a, d) == 3)
        return true;

    return false;
}

int counts(vector<vector<int>>& a, int layer){
    int ans = 0;
    int z = layer - 1;

    pair<int,int> e = {z, z};
    pair<int,int> b = {z, z};
    pair<int,int> c = {z, z};
    pair<int,int> d = {z, z};
    
    b = increment(a, b, layer);
    c = increment(a, c, layer);
    c = increment(a, c, layer); 
    d = increment(a, d, layer); 
    d = increment(a, d, layer); 
    d = increment(a, d, layer); 

    int n = a.size() - 2*(layer - 1);
    int m = a[0].size() - 2*(layer - 1);
    int limit = 2*(n+m-2);
    if(limit < 4)
        return 0;
    for(int i = 0; i < limit; i++){
        // cout<<"LIMIT: "<<limit<<endl;
        // cout<<d.first<<" "<<d.second<<endl;
        if(check(e, b, c, d, a))
            ans++;

        e = increment(a, e, layer); 
        b = increment(a, b, layer);
        c = increment(a, c, layer);
        d = increment(a, d, layer); 
    }


    return ans;
}


signed main(){

    int t;
    cin>>t;

    while(t--){
        int n, m;
        cin>>n>>m;


        vector<vector<int>> a(n, vector<int>(m));
        vector<string> b(n);

        map<int, int> freq;

        for(int i = 0; i < n; i++){
            cin>>b[i];
        }

        for(int i = 0; i < n; i++){
            vector<int> temp;
            for(int j = 0; j < m; j++){
                a[i][j] = b[i][j] - '0';
            }
        }

    //    for(int i = 0; i < n; i++){
            
    //         for(int j = 0; j < m; j++){
    //             cout<<a[i][j]<<" ";
    //         }
    //         cout<<endl;
    //     }
        int x = (min(n, m) + 1)/2;
        int ans = 0;
        for(int i = 1; i <= x; i++)
            ans+=counts(a, i);

        cout<<ans<<endl;


    }
    
    return 0;
}
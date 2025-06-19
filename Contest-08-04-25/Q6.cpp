#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main(){

    int t;
    cin>>t;

    while(t--){
        int n, m;
        cin>>n;
        cin>>m;

        vector<string> a(n);
        vector<bool> exists(n, false);
        vector<vector<string>> b(m, vector<string>(n));

        for(int i = 0; i < n; i++){
            cin>>a[i];
        }

        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++)
                cin>>b[i][j];
        }

        int maxChar = 0;

        for(int i = 0; i < m; i++){
            int curr = 0;
            for(int j = 0; j < n; j++){
                if(a[j] == b[i][j]){
                    curr++;
                    exists[j] = true;
                }
                    

            }
            maxChar = max(curr, maxChar);
                
        }
        bool exist = true;
        for(auto ele : exists)
            if(!ele)
                exist = false;
        if(exist)
            cout<<n + (n - maxChar) * 2 <<endl;
        else
            cout<<-1<<endl;

    
    }
    
    return 0;
}
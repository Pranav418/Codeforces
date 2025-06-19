#include<bits/stdc++.h>
using namespace std;
#define int long long int

const int MOD = 1e9 + 7;

int f(vector<int>& a, vector<int>& b, int i, int j, bool skip = false){

    int n = a.size();
    int m = b.size();
    if(j == m){
        return value;
    }

    
    if(a[i] >= b[j]){
        f(a, b, i + 1, j + 1, skip, value);
    }
    else{
        f(a, b, i + 1, j, skip, value);
        if(skip == false){
            value = min(value, b[j]);
            f(a, b, i + 1, j + 1, true);
        }
    }
    
    return 
}

signed main(){

    
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        
        vector<int> a(n);
        vector<int> b(m);
        int ans = 0;

        for(int i = 0; i < n; i++)
            cin>>a[i];

        for(int i = 0; i < m; i++)
            cin>>b[i];


        

        cout<<ans<<endl;
    }



    


    


    return 0;
}
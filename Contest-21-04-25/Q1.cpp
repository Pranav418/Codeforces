#include<bits/stdc++.h>
using namespace std;
#define int long long int

const int MOD = 1e9 + 7;

signed main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
    
        vector<int> a(n);
        for(int i = 0; i < n; i++)
            cin>>a[i];
    
        set<int> s;
    
        for(int i = 0; i < n; i++)
            s.insert(a[i]);
    
        cout<<s.size()<<endl;
    }



    


    return 0;
}
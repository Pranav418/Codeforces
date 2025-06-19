#include <bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main(){

    int t;
    cin>>t;
    while(t--){
        int n, q;
        cin>>n>>q;
        vector<int> a(n);
        vector<int> queries(q);
        for(int i = 0; i < n; i++){
            cin>>a[i];
        }

        for(int i = 0; i < q; i++){
            cin>>queries[i];
        }

        map<int, int> mp;
        mp[n-1]++;
        for(int i = 1; i < n; i++){
            if(a[i] != a[i-1] + 1)
                mp[i * (n - i)]+= a[i] - a[i-1] - 1;
            mp[ (i + 1) * (n - i) - 1]++;
        }

        for(int i = 0; i < q; i++){
           if(mp.find(queries[i]) != mp.end())
            cout<<mp[queries[i]]<<" ";
           else
            cout<<0<<" "; 
        }
        cout<<endl;



    }
    return 0;
}
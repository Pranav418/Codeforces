#include<bits/stdc++.h>
using namespace std;
#define int long long int



signed main(){

    int t;
    cin>>t;

    while(t--){
        int n, k;
        cin>>n>>k;

        vector<int> a(n);

        for(int i = 0; i < n; i++)
            cin>>a[i];

        sort(a.begin(), a.end(), greater<int>());
        int total = 0;

        for(int i = 0; i < k + 1; i++)
            total += a[i];

        cout<<total<<endl;
    }
    
    return 0;
}
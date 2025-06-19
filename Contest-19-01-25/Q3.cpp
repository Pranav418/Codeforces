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

        map<int, int> freq;

        for(int i = 0; i < n; i++)
            freq[a[i]]++;

        int pairs = 0;

        for(int i = 0; i < n; i++){
            int pair = min(freq[a[i]], freq[k - a[i]]);
            if(a[i] == k - a[i])
                pair = pair/2;
            // cout<<pair<<" : "<<endl;
            int zero = 0;
            pairs += max(pair, zero);
            freq[a[i]] = freq[a[i]] - pair;
            freq[k - a[i]] = freq[k - a[i]] - pair; 
        }

        cout<<pairs<<endl;
        
    }
    
 
    return 0;
}
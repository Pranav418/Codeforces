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

        vector<vector<int>> b;

        for(auto ele : freq){
            b.push_back({ele.first, ele.second});
            // cout<<ele.first<<" : "<<ele.second<<endl;
        }

        int N = b.size();
        sort(b.begin(), b.end());
        reverse(b.begin(), b.end());

        vector<int> prefix(N);
        prefix[0] = b[0][1];
        for(int i = 1; i < N; i++){
            // cout<<b[i][0]<<" "<<b[i-1][0]<<endl;
            if(b[i][0] == b[i-1][0] - 1)
                prefix[i] = prefix[i - 1] + b[i][1];
            else
                prefix[i] = b[i][1];
        }

        // for(int i = 0; i < N; i++)
        //     cout<<prefix[i]<<" "<<endl;
        // cout<<endl;

        int ans = prefix[0];
        int cont = 1;
        for(int i = 1; i < N; i++){
            // cout<<ans<<endl;
            if(b[i][0] == b[i-1][0] - 1){
                cont++;
                if(cont <= k){
                    ans = max(prefix[i], ans);
                }
                else{
                    ans = max(prefix[i] - prefix[i- k], ans);
                }

            }
            else{
                cont = 1;
                ans = max(prefix[i], ans);
            }

        }

        cout<<ans<<endl;

    }

    

    


    return 0;
}
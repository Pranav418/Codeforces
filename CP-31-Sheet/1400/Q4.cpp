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
        vector<int> d(n - 1);

        for(int i = 0; i < n; i++)
            cin>>a[i];

        
        sort(a.begin(), a.end());
    
        for(int i = 0; i < n - 1; i++)
            d[i] = a[i + 1] - a[i];

        if(k > 2){
            cout<<0<<endl;
            continue;
        }
        int ans = *min_element(d.begin(), d.end());
        ans = min(ans, *min_element(a.begin(), a.end()));
        if(k == 1){
            cout<<ans<<endl;
            continue;
        }

        vector<int> D(n);
        D[0] = 0;
        for(int i = 1; i < n; i++)
            D[i] = D[i - 1] + d[i - 1];

        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                int x = D[j] - D[i];
                auto it = lower_bound(a.begin(), a.end(), x);

                int lb = *it;
                // int gb = *upper_bound(a.begin(), a.end(), x);
                if(lb == x){
                    ans = 0;
                    break;
                }
                int u = lb - x;
                int l;
                if(it - a.begin()){
                    l = x - a[it - a.begin() - 1];
                    ans = min(min(u, l), ans);
                }     
                else
                    ans = min(u, ans);
                    
                
            }
        }

        



        cout<<ans<<endl;

    }
        


    
 
    return 0;
}
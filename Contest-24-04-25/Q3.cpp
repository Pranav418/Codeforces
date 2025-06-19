#include<bits/stdc++.h>
using namespace std;
#define int long long int

const int MOD = 1e9 + 7;

signed main(){

    
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        vector<int> a(n);
        vector<int> b(n);

        for(int i = 0; i < n; i++)
            cin>>a[i];

        for(int i = 0; i < n; i++)
            cin>>b[i];

        int ones = 0;

        for(int i = 0; i < n; i++)
            if(b[i] == -1)
                ones++;

        if(ones == n){
            int mini = *min_element(a.begin(), a.end());
            int maxi = *max_element(a.begin(), a.end());

            cout<<max(mini + k - maxi + 1, (long long)0)<<endl;
            continue;
        }
        set<int> h;
        for(int i = 0; i < n; i++){
            if(b[i] != -1){
                h.insert(a[i] + b[i]);
            }
        }

        if(h.size() > 1){
            cout<<0<<endl;
            continue;
        }

        int sum = *h.begin();

        bool breaky = false;
        for(int i = 0; i < n; i++){
            if(b[i] == -1){
                if(sum - a[i] > k || (sum - a[i] < 0)){
                    breaky = true;
                    break;
                }
            }
        }
        // cout<<"HERE"<<endl;
        // cout<<sum<<endl;
        // cout<<breaky<<endl;
        if(breaky){
            cout<<0<<endl;
            continue;
        }



        cout<<1<<endl;
        



    }



    


    


    return 0;
}
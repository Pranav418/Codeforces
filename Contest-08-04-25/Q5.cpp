#include<bits/stdc++.h>
using namespace std;
#define int long long int

bool checkMex(vector<int> &a, int mex, int k){
    unordered_map<int, int> S = {};

    int subarrays = 0;
    int zero = 0;
    for(int i = 0; i < a.size(); i++){
        
        if(a[i] < mex)
            S.insert({a[i], zero});

        if(S.size() >= mex){
            unordered_map<int, int> S_new = {};
            S.swap(S_new);
            subarrays++;
            // cout<<"I: "<<i<<"Size:"<<S.size()<<endl;
        }

    }

    return subarrays >= k;

}


signed main(){

    int t;
    cin>>t;

    while(t--){
        int n, k;
        cin>>n>>k;

        vector<int> a(n);

        for(int i = 0; i < n; i++)
            cin>>a[i];

        int low = 0;
        int high = n;
        int mid;
        int ans = -1;

        while(low <= high){
            mid = low + (high - low)/2;
            // cout<<mid<<endl;
            if(checkMex(a, mid, k)){
                low = mid + 1;
                ans = mid;
            }
            else
                high = mid - 1;
        }

        cout<<ans<<endl;

    
    }
    
    return 0;
}
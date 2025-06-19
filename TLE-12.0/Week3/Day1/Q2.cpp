#include<bits/stdc++.h>
using namespace std;
#define int long long int

bool kStones(vector<int>& a, vector<int>& b, int k){
    for(int i = a.size() - 1; i >= 2; i--){
        // cout<<b[i]<<" "<<k<<endl;
        if(b[i] < k)
            return false;
        int d = min(a[i], b[i] - k)/3;
        b[i-1] += d;
        b[i-2] += 2*d;
    }

    if(b[0] < k)
        return false;
    if(b[1] < k)
        return false;
    return true;
}

signed main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<int> a(n);

        for(int i = 0; i < n; i++)
            cin>>a[i];

        vector<int> b = a;

        int low = 1;
        int high = 1e9;
        int mid;
        int ans = -1;

        while(low <= high){
            mid = low + (high - low)/2;
            // cout<<mid<<endl;
            b = a;
            if(kStones(a, b, mid)){
                ans = mid;
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }

        cout<<ans<<endl;
    }



    

    
    return 0;
}
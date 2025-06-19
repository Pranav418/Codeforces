#include<bits/stdc++.h>
using namespace std;
#define int long long int

bool check(vector<vector<int>>& a, int k){
    int r = 0;
    int l = 0;

    for(int i = 0; i < a.size(); i++){
        r += k;
        l -= k;
        if(r < a[i][0])
            return false;
        if(l > a[i][1])
            return false;
        r = min(a[i][1], r);
        l = max(a[i][0], l);
    }

    return true;
}

signed main(){

    int t;
    cin>>t;
    while(t--){    
        int n;
        cin>>n;

        vector<vector<int>> a(n, vector<int>(2));

        for(int i = 0; i < n; i++){
            cin>>a[i][0]>>a[i][1];
        }

        int low = 0;
        int high = 1e9 + 5;
        int mid;
        int ans = -1;

        while(low <= high){
            mid = low + (high - low)/2;

            if(check(a, mid)){
                ans = mid;
                high = mid - 1;
                
            }
            else
                low = mid + 1;


        }

        cout<<ans<<endl;

    }
        


    
 
    return 0;
}
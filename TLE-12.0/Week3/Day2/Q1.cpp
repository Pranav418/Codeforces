#include<bits/stdc++.h>
using namespace std;
#define int long long int

int steps(vector<int>& a, int k, int lv, int sum){
    int diff = 0;
    

    for(int i = a.size() - 1; i > 0; i--){
        diff += a[i] - lv;
        if(lv == -2){
            // cout<<sum - diff - (a[0] -lv)<<" :";
            // cout<<"sum: "<<sum<<endl;
            // cout<<"diff: "<<diff<<endl;
            // cout<<"a[0]: "<<a[0]<<endl;
            // cout<<"lv: "<<lv<<endl;
            // cout<<"i: "<<i<<endl;
            // cout<<"ANS: "<<(a.size() - i) + a[0] - lv<<endl;
        }

        if(sum - diff - (a[0] -lv) < k){
            return (a.size() - i) + a[0] - lv;
        }
    }

    return -1;

}

signed main(){

    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;

        vector<int> a(n);
        int sum = 0;
        for(int i = 0; i < n; i++){
            cin>>a[i];
            sum += a[i];
        }
            
        sort(a.begin(), a.end());
        int low = -1e9;
        int high = a[0];
        int mid;
        int ans = INT_MAX;

        if(n == 1){
            if(a[0] <= k){
                cout<<0<<endl;
            }
            else{
                cout<<a[0] - k<<endl;
            }

            continue;
        }

        if(sum < k){
            cout<<0<<endl;
            continue;
        }

        while(low <= high){
            mid = low + (high - low)/2;
            //cout<<mid<<endl;
            int x = steps(a, k, mid, sum);
            if(x != -1){
                ans = min(x, ans);
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        cout<<ans<<endl;
        // if(ans != INT_MAX)
        //     cout<<ans<<endl;
        // else
        //     cout<<0<<endl;


    }



    

    
    return 0;
}
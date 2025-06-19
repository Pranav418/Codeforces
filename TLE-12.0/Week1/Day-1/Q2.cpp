#include<bits/stdc++.h>
using namespace std;
#define int long long int

int maxProducts(vector<int> &a, int t){
    int products = 0;
    for(int i = 0; i < a.size(); i++){
        if(products > 1e18 + 5){
            return products;
        }
        products += (t/a[i]);
    }

        
    
    return products;
}

signed main(){
    
        
    int n, t;
    cin>>n>>t;

    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }

    int low = 1;
    int high = 1e18 + 5;
    int mid;
    int ans = -1;
    while(low <= high){
        mid = low + (high - low)/2;
        // cout<<mid<<endl;
        // cout<<maxProducts(a, mid)<<endl;
        // cout<<endl;
        if(maxProducts(a, mid) >= t){
            ans = mid;
            high = mid - 1;
        }
        else
            low = mid + 1;
    }

    cout<<ans<<endl;


       
            

        
    




    return 0;
}
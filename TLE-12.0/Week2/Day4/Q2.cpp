#include<bits/stdc++.h>
using namespace std;
#define int long long int

vector<int> query(int l, int r){
    cout<<"? "<<l<<" "<<r<<endl;
    vector<int> q(r-l+1);
    for(int i = 0; i < r - l + 1; i++)
        cin>>q[i];

    return q;
}

bool checkLeft(int low, int mid, int high){
    vector<int> a = query(low, mid);

    int pairs = 0;
    for(int i = 0; i < a.size(); i++)
        if((a[i] < low) || a[i] > mid)
            pairs++;
        
    int length = mid - low + 1;
    return ((length % 2) != (pairs % 2));
}

signed main(){

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int low = 1;
        int high = n;
        int ans = -1;
        int mid;

        while(low <= high){

            mid = low + (high - low)/2;

            if(checkLeft(low, mid, high)){
                ans = mid;
                high = mid;
                if(low == high) break;
            }
            else
                low = mid + 1;
        }

        cout<<"! "<<ans<<endl;
    }
    
    return 0;
}
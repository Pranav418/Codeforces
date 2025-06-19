#include<bits/stdc++.h>
using namespace std;
#define int long long int

int getSum(int l, int r){
    int sum;
    cout<<"? "<<l<<" "<<r<<endl;
    cin>>sum;

    return sum;
}

signed main(){

    int n, t;
    cin>>n>>t;
    int k;
    cin>>k;

    int ans = -1;
    int low = 1;
    int high = n;
    int mid;

    while(low <= high){
        mid = low + (high - low)/2;
        int sum = getSum(1, mid);
        // cout<<mid<<" "<<sum<<endl;
        if(sum <= mid - k){
            ans = mid;
            high = mid - 1;
        }
        else
            low = mid + 1;
            
            
    }

    cout<<"! "<<ans<<endl;

    




    


    return 0;
}
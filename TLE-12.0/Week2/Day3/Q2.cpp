#include<bits/stdc++.h>
using namespace std;
#define int long long int

bool checkLeft(vector<int>& a, vector<int>& prefix, int low, int high, int mid){
    int k = mid - low + 1;
    cout<<"? "<<k<<" ";

    for(int i = low; i <= mid; i++){
        cout<<i+1<<" ";
    }

    cout<<endl;

    int sum;
    cin>>sum;

    int presum = prefix[mid];
    if(low != 0)
        presum -= prefix[low - 1];
    

    return sum == (presum + 1);
}

signed main(){

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        vector<int> prefix(n);
        for(int i = 0; i < n; i++)
            cin>>a[i];
        prefix[0] = a[0];
        for(int i = 1; i < n; i++)
            prefix[i] = prefix[i-1] + a[i];

        int low = 0;
        int high = n - 1;
        int ans = n - 1;
        int mid;

        while(low <= high){
            mid = low + (high - low)/2;
            // cout<<"Mid: "<<mid<<endl;
            if(checkLeft(a, prefix, low, high, mid)){
                ans = mid;
                high = mid;
                if(low == high) break;
            }
            else
                low = mid + 1;

        }

        cout<<"! "<<mid + 1<<endl;
    }




    


    return 0;
}
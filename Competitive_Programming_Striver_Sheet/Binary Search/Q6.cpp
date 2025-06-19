#include<bits/stdc++.h>
using namespace std;

bool check(int x, int m, vector<int>& a){
    int prev = 0;
    int k;
    for(int i = 0; i < a.size(); i++){
        if(a[i] >= prev){
            k = m - (a[i] - prev);
            if(k > x)
                prev = a[i];
            
        }
        else{
            k = prev - a[i];
            if(k > x)
                return false;
                
        }

        // cout<<prev<<" "<<k<<" "<<a[i]<<endl;
    }

    return true;
}

int main(){

    int n, m;
    cin>>n>>m;
    
    vector<int> a(n);

    for(int i = 0; i < n; i++)
        cin>>a[i];

    int low = 0;
    int high = m - 1;
    int mid = low + (high - low)/2;
    int ans = mid;
    while(low <= high){
        mid = low + (high - low)/2;
        // cout<<low<<" "<<mid<<" "<<high<<" "<<ans<<endl;
        if(check(mid, m, a)){
            ans = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }

    cout<<ans<<endl;
    


    return 0;
}
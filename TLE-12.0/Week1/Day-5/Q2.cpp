#include<bits/stdc++.h>
using namespace std;
#define int long long int

bool checkRadius(vector<int>& t, vector<int>& c, int radius){
    
    for(int i = 0; i < c.size(); i++){
        int l;
        int r = lower_bound(t.begin(), t.end(), c[i]) - t.begin();

        if(*lower_bound(t.begin(), t.end(), c[i]) == c[i]){
            l = lower_bound(t.begin(), t.end(), c[i]) - t.begin();
        }
        else{
            if(lower_bound(t.begin(), t.end(), c[i]) != t.begin())
                l = lower_bound(t.begin(), t.end(), c[i]) - t.begin() - 1;
            else
                l = lower_bound(t.begin(), t.end(), c[i]) - t.begin();
        }

        // cout<<l<<" "<<r<<" "<<i<<endl;
        if(min(abs(t[l] - c[i]), abs(t[r] - c[i])) > radius)
            return false;

    }

    return true;
}

signed main(){
        
    int n, m;
    cin>>n>>m;

    vector<int> c(n);
    for(int i = 0; i < n; i++){
        cin>>c[i];
    }

    vector<int> t(m);
    for(int i = 0; i < m; i++){
        cin>>t[i];
    }

    sort(c.begin(), c.end());
    sort(t.begin(), t.end());

    int radius = -1;
    int low = 0;
    int high = 1e10;
    int mid;

    while(low <= high){
        mid = low + (high - low)/2;
        // cout<<mid<<endl;
        if(checkRadius(t, c, mid)){
            radius = mid;
            high = mid - 1;
        }
        else
            low = mid + 1;
    }

    cout<<radius<<endl;
       
            

        
    




    return 0;
}
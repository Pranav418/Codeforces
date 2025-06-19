#include<bits/stdc++.h>
using namespace std;
#define int long long int

bool solve = false;

bool check(vector<int>& a, int m){
    int n = a.size();
    vector<int> b = a;

    for(int i = 0; i < n; i++){
        b[i] -= (n - (i + 1) + 1) * m;


    }

    int f = b[0];

    bool exists = true;
    for(int i = 0; i < n; i++){
        if( (i + 1) * f > b[i] ){
            return true;
        }
        if((i + 1) * f < b[i]) {
            exists = false;
        }
    }

    if(exists && (f >= 0)){
        // cout<<"M value: "<<m<<endl;
        // for(auto p : b)
        //     cout<<p<<" ";
        // cout<<endl;
        solve = true;
    }

    return false;
}


signed main(){

    int t;
    cin>>t;
    while(t--){    
        
        solve = false;
        int n;
        cin>>n;

        vector<int> a(n);

        for(int i = 0; i < n; i++)
            cin>>a[i];


        int low = 0;
        int high = 1e9 + 1;
        int mid;
        int ans = -1;

        while(low <= high){
            mid = low + (high - low)/2;
            // cout<<"mid: "<<mid<<endl;
            if(check(a, mid)){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }

        if(solve)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;


    }
        


    
 
    return 0;
}
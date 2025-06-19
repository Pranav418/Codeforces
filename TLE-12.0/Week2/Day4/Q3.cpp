#include<bits/stdc++.h>
using namespace std;
#define int long long int

bool happy(vector<int>& a, vector<int>& b, int k){
    int people = 0;

    for(int i = 0; i < a.size(); i++){
        // if((i+1 + a[i] >= k) && (a.size() - i + b[i] >= k))
        if((people + 1 + a[i] >= k) && (b[i] >= people))
            people++;
        
    }

    return people >= k;
}

signed main(){

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> a(n), b(n);

        for(int i = 0; i < n; i++)
            cin>>a[i]>>b[i];

        int low = 0;
        int high = n;
        int ans = 0;
        int mid;

        while(low <= high){

            mid = low + (high - low)/2;

            if(happy(a, b, mid)){
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
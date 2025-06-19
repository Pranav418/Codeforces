#include <bits/stdc++.h>
using namespace std;
#define int long long int 

signed main(){

    int t;
    cin>>t;

    while(t--){

        int n, x;
        cin>>n>>x;
        vector<int> a(n);
        
        int m = 0;
        int sum = 0;
        for(int i = 0; i < n; i++){
            cin>>a[i];
            m = max(a[i], m);
            sum += a[i];
        }
        int c = (sum / x) + (sum % x ? 1 : 0);
        cout<<max(m, c)<<endl;


    

    }

  
    
    return 0;
}
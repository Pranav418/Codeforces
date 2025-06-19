#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main(){

    int t;
    cin>>t;
    while(t--){    
        int n, x;
        cin>>n>>x;
        int tank = 0;

        vector<int> a(n + 2);

        for(int i = 1; i <= n; i++){
            cin>>a[i];
        }

        a[0] = 0;
        a[n + 1] = x;

        for(int i = 1; i < n + 2; i++){
            tank = max(a[i] - a[i - 1], tank);

            if(i == n + 1)
                tank = max(2*(a[i] - a[i - 1]), tank);
        }

        cout<<tank<<endl;

    }
        


    
 
    return 0;
}
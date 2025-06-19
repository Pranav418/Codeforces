#include<bits/stdc++.h>
using namespace std;
#define int long long int


signed main(){

    int t;
    cin>>t;
    while(t--){    
        int n, k;
        cin>>n>>k;

        vector<int> a(n);

        for(int i = 0; i < n; i++){
            cin>>a[i];
        }

        vector<bool> yes(n, false);

        for(int i = 1; i < n; i++){
            yes[i] = (a[i] * 2 > a[i - 1]);
        }

        int ans = 0;
        int row = 0;
        for(int i = 0; i < n; i++){
            if(yes[i]){
                row++;
            }
            else{
                row = 0;
            }

            if(row >= k){
                ans++;
            }
        }

        cout<<ans<<endl;




    }
        


    
 
    return 0;
}
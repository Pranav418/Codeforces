#include<bits/stdc++.h>
using namespace std;
#define int long long int

const int MOD = 1e9 + 7;

signed main(){

    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ans = 0;
        int ones = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == '1')
                ones++;
        }

        for(int i = 0; i < n; i++){
            if(s[i] == '1')
                ans--;
            else
                ans++;

            ans += ones;
        }

        cout<<ans<<endl;
    }



    


    


    return 0;
}
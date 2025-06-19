#include<bits/stdc++.h>
using namespace std;
#define int long long int



signed main(){

    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;

        bool nonZero = false;
        int n = s.length();
        int ans = 0;
        for(int i = n - 1; i >= 0; i--){
            if(s[i] != '0'){
                nonZero = true;
            }

            if(s[i] == '0' && !nonZero){
                ans++;
            }
            if(s[i] != '0')
                ans++;
        }

        cout<<ans - 1<<endl;
    
    }
    
    return 0;
}
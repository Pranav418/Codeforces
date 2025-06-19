#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        string s, r;
        cin>>s;
        cin>>r;

        int o = 0;
        int z = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '1')
                o++;
            else
                z++;
        }
        bool win = true;
        for(int i = 0; i < r.length(); i++){
            if(o == 0 || z == 0){
                win = false;
                break;
            }
            if(r[i] == '1')
                z--;
            else
                o--;

            
        }
        if(win)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;




    }
    return 0;
}
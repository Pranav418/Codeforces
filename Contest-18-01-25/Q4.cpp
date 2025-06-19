#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<string> a(n);

        vector<int> ans(n);

        for(int i = 0; i < n; i++)
            cin>>a[i];

        for(int i = 0; i < n; i++){
            int infront = 0;
            for(int j = 0; j < n; j++){
                if(i == j) continue;

                if(i < j){
                    if(a[i][j] == '0')
                        infront++;
                }
                else{
                    if(a[i][j] == '1')
                        infront++;
                }
            }
            ans[infront] = i + 1;
            // cout<<infront<<endl;
        }

        
        for(int i = 0; i < n; i++)
            cout<<ans[i]<<" ";
        cout<<endl;


        
    }

    

    
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main(){
    
    int t;
    cin>>t;
    while(t--){
        int n, r;
        cin>>n>>r;
        vector<int> a(n);
        

        int ans = 0;
        for(int i = 0; i < n; i++)
            cin>>a[i];

        sort(a.begin(), a.end(), greater<int>());
        for(int i = 0; i < n; i++){
            if(a[i] % 2 == 0){
                ans += a[i];
                r -= a[i]/2;
                a[i] = 0;
            }
        }
        // cout<<"A: "<<ans<<" "<<r<<endl;
        for(int i = 0; i < n; i++){
            
            if(r <= 0){
                break;
            }

            if(a[i] % 2){
                ans += (a[i]/2)*2;
                r -= a[i]/2;
                a[i] = 1;
            }
        }
        // cout<<"B: "<<ans<<" "<<r<<endl;
        int ones = 0;
        for(int i = 0; i < n; i++){
           if(a[i] >= 1)
                ones++;


                
        }
        if(ones < r)
            ans += ones;
        else
            ans += (2*r - ones);
        
        cout<<ans<<endl;
    }



    

    


    return 0;
}
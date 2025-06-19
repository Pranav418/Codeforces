#include<bits/stdc++.h>
using namespace std;
#define int long long int

const int MOD = 1e9 + 7;

signed main(){

    
    int t;
    cin>>t;
    while(t--){
        int n, x;
        cin>>n>>x;
        vector<int> a(n);
        a[n - 1] = x;
        int up = 0;
        for(int i = 0; i < n - 1; i++){
            if(i == x)
                up++;
            a[i] = i + up;
        }

        if(n == x)
            a[n - 1]--;

        for(int i = 0; i < n; i++)
            cout<<a[i]<<" ";
        cout<<endl;
    }



    


    


    return 0;
}
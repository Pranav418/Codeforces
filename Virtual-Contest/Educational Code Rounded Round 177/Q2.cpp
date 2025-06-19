#include<bits/stdc++.h>
using namespace std;
#define int long long int



signed main(){

    int t;
    cin>>t;

    while(t--){
        
        int zero = 0;
        int n, k, x;
        cin>>n>>k>>x;

        vector<int> a(n);
        vector<int> s(n);

        for(int i = 0; i < n; i++)
            cin>>a[i];
        
        s[n - 1] = a[n - 1];
        
        for(int i = n - 2; i >= 0 ; i--){
            s[i] = s[i + 1] + a[i];
        }
            
        
        int sum = s[0];
        reverse(s.begin(), s.end());
        int m = max(x - 1, zero) / sum;
        int value = x % sum;
        if(value == 0)
            value = sum;

        int index = 0;
        for(int i = 0; i < n; i++){
            if(s[i] >= value){
                index = i;
                // cout<<"INDEX: "<<index<<endl;
                // cout<<"s[i] "<<s[i]<<endl;
                // cout<<"I: "<<i<<endl;
                break;
            }
                
            
        }

        index += n*m;
        
        
        cout<<max(k*n - index, zero)<<endl;
        // cout<<m<<endl;
        // cout<<value<<endl;
        // cout<<index<<endl;


    
    }
    
    return 0;
}
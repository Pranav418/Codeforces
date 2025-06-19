#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main(){

    
    int t;
    cin>>t;

    while(t--){
        
        int n;
        cin>>n;

        vector<int> a(n);

        for(int i = 0; i < n; i++)
            cin>>a[i];

        bool sorted = true;

        for(int i = 1; i < n; i++){
            if(a[i - 1] > a[i]){
                sorted = false;
                break;
            }

            int x = min(a[i - 1], a[i]);
            a[i - 1] -= x;
            a[i] -= x;


        }

        if(sorted)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

        
    }
    
 
    return 0;
}
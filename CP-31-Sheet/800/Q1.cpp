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
        vector<int> b(n);

        for(int i = 0; i < n; i++){
            cin>>a[i];
            b[i] = a[i];
        }

        sort(b.begin(), b.end());

        bool sorted = true;

        for(int i = 0; i < n; i++){
            if(a[i] != b[i]){
                sorted = false;
                break;
            }
        }

        if(!sorted && (k == 1))
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;

        

    }
        


    
 
    return 0;
}
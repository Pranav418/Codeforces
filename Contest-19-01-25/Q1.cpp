#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main(){

    
    int t;
    cin>>t;

    while(t--){
        
        vector<int> a(4);

        for(int i = 0; i < 4; i++)
            cin>>a[i];

        int a1 = a[0];
        int a2 = a[1];
        int a4 = a[2];
        int a5 = a[3];
        int ans = 1;

        if(a1 + a2 + a4 == a5){
            ans++;
        }

        if(a1 + 2*a2 == a4){
            ans++;
        }

        if(a2 + a5 == 2*a4){
            ans++;
        }
        int three = 3;
        cout<<min(ans, three)<<endl;
    }
    
 
    return 0;
}
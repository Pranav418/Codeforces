#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        int x, y;
        cin>>x>>y;
        int ans = n / min(x, y);
        if(n % min(x, y))
            ans++;
        cout<<ans<<endl; 

    }
    return 0;
}
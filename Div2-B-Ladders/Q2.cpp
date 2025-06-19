#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
    int n, m;
    cin>>n>>m;

    vector<int> a(m);

    for(int i = 0; i < m; i++)
        cin>>a[i];

    int position = 1;
    int ans = 0;
    for(int i = 0; i < m; i++){
        if(a[i] - position < 0)
            ans += a[i] - position + n;
        else
            ans += a[i] - position;
        position = a[i];
    }

    

    cout<<ans;
    



    return 0;
}
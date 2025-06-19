#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main(){
    int n, m;
    cin>>n>>m;

    int k = min(n, m) + 1;
    
    cout<<k<<endl;

    

    for(int i = 0; i < k; i++)
        cout<<k - 1 - i<<" "<<i<<endl;
    

    


    return 0;
}
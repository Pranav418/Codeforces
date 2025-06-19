#include<bits/stdc++.h>
using namespace std;
#define int long long int

int positiveMod(int a, int b){
    return (b + (a % b)) % b;
}

signed main(){
    
    int MOD = 1000000007;
    int x, y;
    cin>>x>>y;
    int n;
    cin>>n;

    vector<int> a(6);
    a[0] = x;
    a[1] = y;

    for(int i = 2; i < 6; i++)
        a[i] = (a[i-1] - a[i-2]);
    
    cout<<positiveMod(a[(n-1) % 6], MOD);

    return 0;
}
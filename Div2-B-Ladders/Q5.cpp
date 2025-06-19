#include<bits/stdc++.h>
using namespace std;
// #define int long long int
signed main(){
    int n, l;
    cin>>n>>l;

    vector<long double> a(n);

    for(int i = 0; i < n; i++)
        cin>>a[i];

    sort(a.begin(), a.end());

    long double d = 0;
    d = max(a[0], l - a[n-1]);
    for(int i = 1; i < n; i++){
        d = max( (a[i] - a[i - 1]) / 2, d);
    }

    cout<<fixed<<d;


    



    return 0;
}
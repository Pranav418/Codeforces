#include<bits/stdc++.h>
using namespace std;
#define int long long int


signed main(){
    
    int n;
    cin>>n;

    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin>>a[i];

    int time = 0;
    int pos = 0;
    for(int i = 0; i < n - 1; i++){
        time += a[i] - pos + max((long long)0, a[i] - a[i+1]) + 2;
        pos = min(a[i], a[i+1]);
    }

    time += a[n-1] - pos + 1;
    // cout<<"TIME: "<<time<<endl;

    cout<<time<<endl;

    return 0;
}
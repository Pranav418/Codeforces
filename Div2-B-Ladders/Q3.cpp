#include<bits/stdc++.h>
using namespace std;
#define int long long int

// int power2(int x, int n){
//     int ans = 1;
//     while(n--)
//         ans *= 2;
//     return ans;
// }

int bitCount(int x){
    int ones = 0;
    while(x){
        if(x % 2)
            ones++;
        x /= 2;
    }

    return ones;
}

signed main(){
    int n, m, k;
    cin>>n>>m>>k;

    vector<int> a(m+1);

    for(int i = 0; i < m + 1; i++)
        cin>>a[i];

    int fedor = a[m];

    int maxK = n;

    int friends = 0;
    for(int i = 0; i < m; i++){
        if(bitCount(a[i] ^ fedor) <= k)
            friends++;
    }

    cout<<friends;




    return 0;
}
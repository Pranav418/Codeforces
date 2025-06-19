#include<bits/stdc++.h>
using namespace std;
#define int long long int



signed main(){

    int t;
    cin>>t;

    while(t--){
        int n, k;
        cin>>n>>k;
    
        int operations = 0;

        if(k % 2 && n % 2){
            n -= k;
            operations++;
            operations += (n/ (k-1) );
            if(n % (k - 1))
                operations++;
        }
        else if(k % 2 && (n % 2 == 0)){
            operations += (n/ (k-1) );
            if(n % (k - 1))
                operations++;
        }

        cout<<operations<<endl;
    }
    
    return 0;
}
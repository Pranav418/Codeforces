#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main(){
    int t;
    cin>>t;

    while(t--){
        int n, b, c;
        cin>>n>>b>>c;

        if(b == 0 && c < n - 2){
            cout<<-1<<endl;
            continue;
        }

        if(c >= n){
            cout<<n<<endl;
            continue;
        }

        if(b == 0){
            cout<<n-1<<endl;
            continue;
        }

        if(n - 1 - c < b){
            cout<<n-1<<endl;
            continue;
        }
        int value = (n - 1 - c ) / b;
        // if( (n - 1 - c ) % b == 0){
            value++;
        // }

        cout<<n - value<<endl;
        // cout<<"THIS"<<endl;



    }
    return 0;
}
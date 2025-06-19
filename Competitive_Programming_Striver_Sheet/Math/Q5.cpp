#include <bits/stdc++.h>
using namespace std;


int main(){

    int t;
    cin>>t;
    while(t--){
        int n, x;
        cin>>n>>x;
        if(n > 2)
            cout<<2 + (n-3)/x<<endl;
        else
            cout<<1<<endl;
        
    }
    
    return 0;
}

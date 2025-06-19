#include<bits/stdc++.h>
#define int long long int
using namespace std;

signed main(){
    int n, m;
    cin>>n>>m;
    string s = "";
    if( ( m > 2 * (n + 1) ) || ( n > (m + 1) ) ){
        cout<<-1;
        return 0;
    }

    if(n > m){
        s += '0';
        n--;
    }
        

    while(m > n && n > 0){
        s += "110";
        m -= 2;
        n -= 1;
    }

    while(m == n && n){
        s += "10";
        m--;
        n--;
    }

    if(n == 0){
        while(m--)
            s += "1";
    }

    cout<<s<<endl;

    return 0;
}
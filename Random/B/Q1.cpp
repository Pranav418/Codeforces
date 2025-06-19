#include <bits/stdc++.h>
using namespace std;
#define int long long int 

string solve(int n){
    if(n == 1 || n == 3)   // simplify later
        return "-1";

    string ans = "";
    for(int i = 0; i < n - 2; i++){
        if(i != n - 4 || (n % 2 == 0))
            ans += '3';
        else
            ans += '6';
    }
    return ans + "66";
    
}

signed main(){

    int t;
    cin>>t;

    while(t--){

       int n;
       cin>>n;

        cout<<solve(n)<<endl;;


    }

  
    
    return 0;
}
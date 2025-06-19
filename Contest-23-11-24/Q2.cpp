#include <bits/stdc++.h>
using namespace std;
#define int long long int 

string solve(string& s){
    int n = s.length();
    if(n == 1){
        return "-1";
    }
    
    char c1 = s[0];
    char c2 = s[1];
    if((c1 == c2)){
        string ans = "";
        return ans + c1 + c2;
    }
    for(int i = 2; i < n; i++){
        if(s[i] != c1){
            string ans = "";
            if(s[i] != c2){
                return ans + c1 + c2 + s[i];
            }
            else{
                return ans + c2 + s[i];
            }
        } 
        swap(c1, c2);       
    }

    return "-1";
}

signed main(){

    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;

        cout<<solve(s);
        cout<<endl;
    }

  
    
    return 0;
}
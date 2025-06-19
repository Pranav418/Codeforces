#include<bits/stdc++.h>
using namespace std;
#define int long long int

int val(char c){
    return c - 'a';
}

signed main(){
    int n, p;
    cin>>n>>p;
    string s;
    cin>>s;

    int ans = 0;

    vector<int> diff(n, 0);
    if(p > n/2) p = n - p + 1;
    
    int start = -1;
    int end = -1;
    for(int i = 0; i <= (n - 1)/2; i++){
        diff[i] = abs(val(s[i]) - val(s[n - 1 - i])) > 13 ? 26 - abs(val(s[i]) - val(s[n - 1 - i])) : abs(val(s[i]) - val(s[n - 1 - i])); 
        // cout<<diff[i]<<endl;
        ans += diff[i];
        if(diff[i] != 0){
            if(start == -1){
                start = i;
            }
            end = i;
        }
    }
    if(start == - 1){
        cout<<ans<<endl;
        return 0;
    }
    ans += (end - start) + min(abs(p-1 - start), abs(p-1 - end)); 

    cout<<ans<<endl;
    return 0;
}
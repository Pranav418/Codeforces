#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    vector<int> a(n);

    string ans = "EASY";
    for(int i = 0; i < n; i++){
        cin>>a[i];
        if(a[i]) ans = "HARD";
    }
    cout<<ans;
    return 0;
    
}
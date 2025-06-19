#include <bits/stdc++.h>
using namespace std;


int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        int even = 0;
        int odd = 0;
        for(int ele : a){
            cin>>ele;
            ele % 2 ? odd++ : even++;
        }

        if( (odd % 2) || (odd && even) )
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
    
    return 0;
}
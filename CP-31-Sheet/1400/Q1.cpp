#include<bits/stdc++.h>
using namespace std;
#define int long long int

int getZeros(int x){
    int ans = 0;
    while(x){
        if(x % 10 == 0)
            ans++;
        else
            break;
        x /= 10;
    }

    return ans;
}

int getDigits(int x){
    int ans = 0;
    while(x){
        ans++;
        x /= 10;
    }

    return ans;
}

signed main(){

    int t;
    cin>>t;
    while(t--){    
        int n, m;
        cin>>n>>m;

        vector<int> a(n);

        for(int i = 0; i < n; i++){
            cin>>a[i];
        }
        vector<int> b;
        int digits = 0;
        for(int i = 0; i < n; i++){
            digits += getDigits(a[i]);
            b.push_back(getZeros(a[i]));
            // cout<<getZeros(a[i])<<" ";
        }
        sort(b.begin(), b.end(), greater<int>());
        // cout<<endl;
        // cout<<digits<<endl;


        for(int i = 0; i < b.size(); i+=2){
            digits -= b[i];
        }
        // cout<<digits<<endl;
        if(digits <= m)
            cout<<"Anna"<<endl;
        else
            cout<<"Sasha"<<endl;

    }
        


    
 
    return 0;
}
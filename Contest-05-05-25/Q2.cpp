#include<bits/stdc++.h>
using namespace std;
#define int long long int

const int MOD = 1e9 + 7;

signed main(){

    
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;

        vector<int> a(n);
        for(int i = 0; i < n; i++)
            cin>>a[i];

        sort(a.begin(), a.end());
        int max = *max_element(a.begin(), a.end());
        int maxCount = count(a.begin(), a.end(), max);

        if(a[n - 1] - a[0] - 1 > k || (maxCount > 1 && (max - a[0] > k))){
            cout<<"Jerry"<<endl;
            continue;
        }
        int sum = accumulate(a.begin(), a.end(), 0);
        if(sum % 2)
            cout<<"Tom"<<endl;
        else
            cout<<"Jerry"<<endl;


    }

    


    


    return 0;
}
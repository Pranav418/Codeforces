#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main(){

    int t;
    cin>>t;
    while(t--){    
        int n;
        cin>>n;

        vector<int> a(n - 1);
        int sum = 0;
        for(int i = 0; i < n - 1; i++)
            cin>>a[i];

        for(int i = 0; i < n - 1; i++)
            sum += a[i];

        cout<<-sum<<endl;

    }
        


    
 
    return 0;
}
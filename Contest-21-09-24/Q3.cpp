#include<bits/stdc++.h>
#define int long long int
using namespace std;

signed main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i = 0; i < n; i++)
            cin>>a[i];

        sort(a.begin(), a.end());

        if(n <= 2){
            cout<<-1<<endl;
            continue;
        }
        int sum = 0;
        for(int i = 0; i < n; i++)
            sum += a[i];

        int average = a[n/2] * 2;

        if(average * n - sum < 0){
            cout<<0<<endl;
            continue;
        }

        cout<<average * n - sum + 1<<endl;
            





 
    }
    return 0;
}
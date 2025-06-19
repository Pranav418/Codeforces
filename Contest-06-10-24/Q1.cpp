#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
           int n;
        cin>>n;

        vector<int> a(n);

        for(int i = 0; i < n; i++)
            cin>>a[i];

        sort(a.begin(), a.end());
        int sum;
        for(int i = 1; i < n; i++){
            sum = (a[i] + a[i-1])/2;
            // cout<<sum<<endl;
            a[i] = sum;

        }

        cout<<a[n-1]<<endl;

    }
 
    
    return 0;
}
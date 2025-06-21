#include<bits/stdc++.h>
using namespace std;
#define int long long int


signed main(){

    int t;
    cin>>t;
    while(t--){    
        int n;
        cin>>n;

        vector<int> a(n);
        for(auto &i : a)
            cin>>i;

        vector<int> b;
        b.push_back(a[0]);

        int i = 0;
        int j = 1;
        int peaks = 0;
        while(i < n - 1 && j < n - 1){
            if(a[i] <= a[j] && a[j] <= a[j + 1]){
                j++;
            }
            else if(a[i] >= a[j] && a[j] >= a[j + 1]){
                j++;
            }
            else{
                peaks++;
                i = j;
            }
        }

        if(count(a.begin(), a.end(), a[0]) == a.size())
            cout<<1<<endl;
        else
            cout<<peaks + 2<<endl;
    }
        


    
 
    return 0;
}
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
        for(int i = 0; i < n; i++)
            cin>>a[i];

        set<int> s;
        for(auto ele : a)
            s.insert(ele);

        if(s.size() == 1){
            cout<<"NO"<<endl;
            continue;
        }

        int max = *max_element(a.begin(), a.end());
        
        cout<<"YES"<<endl;
        for(int i = 0; i < n; i++){
            if(a[i] == max)
                cout<<1<<" ";
            else
                cout<<2<<" ";
        }
        cout<<endl;

    }

    


    


    return 0;
}
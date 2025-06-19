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

        for(int i = 0; i < n; i++){
            cin>>a[i];
        }

        vector<int> b, c;

        for(int i = 0; i < n; i++){
            if(i % 2)
                c.push_back(a[i]);
            else
                b.push_back(a[i]);
        }

        sort(c.begin(), c.end());
        sort(b.begin(), b.end());

        vector<int> ans;
        int i = 0, j = 0;
        while(i < b.size() && j < c.size()){
            ans.push_back(b[i]);
            ans.push_back(c[j]);
            i++;
            j++;
        }

        if(n % 2)
            ans.push_back(b[b.size() - 1]);

        for(auto ele : ans)
            cout<<ele<<" ";
        cout<<endl;






    }
        


    
 
    return 0;
}
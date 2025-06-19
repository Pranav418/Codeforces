#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main(){

    int n, k;
    cin>>n>>k;
    vector<int> ans;
    vector<int> a(n);

    for(int i = 0; i < n; i++)
        cin>>a[i];

    multiset<int> S;

    for(int i = 0; i < k; i++){
        S.insert(a[i]);
    }

    for(int i = k; i < n; i++){
        int index = (S.size() - 1)/2;
        ans.push_back(*next(S.begin(), index));
        // for (auto it = S.begin(); it != S.end(); it++)
        //     cout << *it << " ";
        // cout<<endl;
        S.erase(S.find(a[i-k]));
        S.insert(a[i]);
    }
    int index = (S.size() - 1)/2;
    ans.push_back(*next(S.begin(), index));

    for(int i = 0; i < ans.size(); i++)
        cout<<ans[i]<<" ";

 
    return 0;
}
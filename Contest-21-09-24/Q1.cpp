#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n, k;
        cin>>n>>k;
        int ans = 0;
        int gold = 0;
        vector<int> a(n);
        for(int i = 0; i < n; i++)
            cin>>a[i];

        for(auto ele : a){
            if(ele == 0){
                if(gold > 0){
                    gold--;
                    ans++;
                }
            }
            else if(ele >= k){
                gold += ele;
            }
        }

        cout<<ans<<endl;
    }
    return 0;
}
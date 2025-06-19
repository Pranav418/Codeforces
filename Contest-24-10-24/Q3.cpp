#include<bits/stdc++.h>
using namespace std;
#define int long long int

int score(vector<int>& a, int index,int n){
    int ans = 0;
    if(index > 0){
        if(a[index - 1] == a[index])
            ans++;
    }

    if(index < n - 1){
        if(a[index + 1] == a[index])
            ans++;
    }

    return ans;
}



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

        int ans = 0;
        int dist = 0;
        for(int i = 0; i < n/2; i++){
            // if(a[i] == a[i+1]){
            //     dist++;

            // }
            int x = score(a, i, n) + score(a, n - i - 1, n);
            swap(a[i], a[n - i - 1]);
            int y = score(a, i, n) + score(a, n - i - 1, n);
            swap(a[i], a[n - i - 1]);
            if(x > y){
                swap(a[i], a[n - i - 1]);
            }
            if(a[i] == a[i+1]){
                dist++;
            }

        }

        cout<<dist<<endl;

    }
    return 0;
}
#include<bits/stdc++.h>

using namespace std;
#define int long long int

int classyNumbers(int x){
    vector<int> a;
    while(x){
        a.push_back(x % 10);
        x /= 10;
    }
    reverse(a.begin(), a.end());
    for(auto ele : a)
        cout<<ele<<" ";
    cout<<endl;

    int ans = 0;
    int n = a.size();
    for(auto ele : a) // one digit
        ans += ele;

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            ans += a[i] * a[j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            for(int k = j + 1; k < n; k++){
                ans += a[i] * a[j] * a[k];
            }
        }
    }
    

    return ans;
}

signed main(){
    
    int t;
    cin>>t;
    while(t--){

        int l, r;
        cin>>l>>r;

        cout<<classyNumbers(r)<<endl;
    }

    return 0;
}
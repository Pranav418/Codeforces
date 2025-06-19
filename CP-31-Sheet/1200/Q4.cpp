#include<bits/stdc++.h>
using namespace std;
#define int long long int

int nC2(int n){
    return ((n) * (n - 1))/2;
}

int reverseNc2(int k){
    return (1 + sqrt(1 + 4 * 2 * k)) / 2;
}

signed main(){

    int t;
    cin>>t;
    while(t--){    
        

        int n;
        cin>>n;
        int N = nC2(n);
        vector<int> a(N);

        for(int i = 0; i < N; i++)
            cin>>a[i];

        map<int, int, greater<int>> map;

        for(auto ele : a){
            map[ele]++;
        }

        int count = 0;
        vector<int> ans;
        for(auto ele : map){
            count += ele.second;
            int p = reverseNc2(count) - ans.size();
            for(int i = 0; i < p; i++)
                ans.push_back(ele.first);
            
        }

        for(auto ele : ans)
            cout<<ele<<" ";

        cout<<endl;



    }
        


    
 
    return 0;
}
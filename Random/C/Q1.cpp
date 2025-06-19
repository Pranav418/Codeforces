#include<bits/stdc++.h>
using namespace std;
#define int long long int
 
 vector<int> diffArray(vector<int>& a){
    int n = a.size();
    vector<int> d(n - 1);

    for(int i = 0; i < n - 1; i++){
        d[i] = a[i + 1] - a[i];
    }

    return d;
 }
 
signed main(){
 
    int t;
    cin>>t;
 
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i = 0; i < n; i++)
            cin>>a[i];
        int maxSum = 0;
        for(int i = 0; i < n; i++){
            maxSum += a[i];
        }
        
        while(a.size() > 1){
            // if(a[n - 1] - a[0] < 0)
            //     reverse(a.begin(), a.end());
            vector<int> d = diffArray(a);
            int sum = 0;
            for(auto ele : d)
                sum += ele;
            maxSum = max(sum, maxSum);
            maxSum = max(-sum, maxSum);

            a = d;
        }

        cout<<maxSum<<endl;
    
    }
    
    return 0;
}
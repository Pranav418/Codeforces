#include <bits/stdc++.h>
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

        int lds = 1;


        int first = n - 1;
        int val = a[n-1];
        for(int i = 1; i < n; i++){
            if(a[i] < a[i-1]){
                first = i - 1;
                val = a[i-1];
                break;
            }
        }
        int ans = 0;
        unordered_map<int, int> freq;
        int maxi = 0;
        for(int i = 0; i < n; i++){
            freq[a[i]]++;
        }
        for(auto ele : freq){
            maxi = max(ele.second, maxi);
        }
        if(first == n - 1){

            cout<< n - maxi <<endl;
            continue;
        }

        for(int i = first + 1; i < n; i++){
            if(a[i] > val)
                ans++;
        }

        int j = first;
        while(j >= 0 && a[j] == val){
            j--;
        }

        cout<<j+1 + ans<<endl;
    }

  
    
    return 0;
}
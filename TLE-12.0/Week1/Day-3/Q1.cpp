#include<bits/stdc++.h>
using namespace std;
#define int long long int

int bs_greaterthan_or_equal(vector<int> &a, int key, int low, int high) {
    int max_limit = high;
    while(low<high) {
        int mid = low +(high-low)/2;

        if(a[mid]<key) 
            low = mid + 1;
        
        else high = mid;
    }

    return high == max_limit ? -1 : high;
}

signed main(){
    
    int n;
    cin>>n;

    vector<int> a(n);

    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
 
    int m;
    cin>>m;

    vector<int> b(m);

    for(int i = 0; i < m; i++)
        cin>>b[i];

    vector<int> prefix(n);
    prefix[0] = a[0];
    // cout<<a[0]<<" ";
    for(int i = 1; i < n; i++){
        prefix[i] = prefix[i - 1] + a[i];
        // cout<<prefix[i]<<" ";
    }
    // cout<<endl;

    for(int target : b){


        cout<<bs_greaterthan_or_equal(prefix, target, 0, n) + 1<<endl;
    }
    

 
 
 
    return 0;
}
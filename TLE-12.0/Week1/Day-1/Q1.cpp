#include<bits/stdc++.h>
using namespace std;
#define int long long int

int minGroups(vector<int> &a, int sum){
    int groups = 1;
    int currentSum = 0;
    for(int i = 0; i < a.size(); i++){
        currentSum += a[i];
        if(currentSum > sum){
            groups++;
            currentSum = a[i];
        }
    }

    return groups;
}

signed main(){
    
        
    int n, k;
    cin>>n>>k;

    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }

    int low = *max_element(a.begin(), a.end());
    int high = 2e14 + 5;
    int mid = low + (high - low)/2;
    int ans = -1;

    while(low <= high){
        mid = low + (high - low)/2;

        if(minGroups(a, mid) <= k){
            high = mid - 1;
            ans = mid;
        }
        else
            low = mid + 1;

    }

    cout<<ans<<endl;
       
            

        
    




    return 0;
}
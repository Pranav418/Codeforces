#include<bits/stdc++.h>
using namespace std;
#define int long long int

bool iceK(vector<int>& a, int mid, vector<int>& result){
    int n = a.size();
    int i = 1;
    int j = n - mid;

    result[0] = a[0];

    while((i < n) && (j < n)){
        if(a[i] > a[j]){
            result[2*i] = a[i];
            result[2*i - 1] = a[j];
            i++;
            j++;
        }
        else{
            return false;
        }
    }

    for(int p = 1 + mid; p < n - mid; p++)
        result[mid + p] = a[p];
    
    return true;
}

signed main(){

    int n;
    cin>>n;

    vector<int> a(n);

    for(int i = 0; i < n; i++)
        cin>>a[i];

    
    sort(a.rbegin(), a.rend());

    int low = 0;
    int high = (n - 1)/2;
    int mid;
    int ans = -1;
    vector<int> result(n);

    while(low <= high){
        mid = low + (high - low)/2;

        if(iceK(a, mid, result)){
            ans = mid;
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }

    if(ans == -1){
        cout<<0<<endl;
    }
    else{
        cout<<ans<<endl;
        for(int i = 0; i < n; i++)
            cout<<result[i]<<" ";
        cout<<endl;
    }

    return 0;
}
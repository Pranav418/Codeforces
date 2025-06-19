#include <bits/stdc++.h>
using namespace std;

long long int sum_K(long long int k){
    return (k * (k + 1))/2;
}

long long int pipes(long long int k, long long int x){
    return 1 + (k*k - k)/2 - (sum_K(k - 1 - x)); 
}

int main(){
    long long int n, k;
    cin>>n>>k;

    if(1 + (k*k - k)/2 < n){
        cout<<-1;
        return 0;
    } 

    int low = 0;
    int high = k - 1;
    int mid = low + (high - low)/2;
    int ans = -1;
    while(low <= high){
        mid = low + (high - low)/2;
        // cout<<low<<" "<<mid<<" "<<high<<endl;
        if(pipes(k, mid) == n){
            ans = mid;
            break;
        }
        else if(pipes(k, mid) < n)
            low = mid + 1;
        else{
            ans = mid;
            high = mid - 1;
        }
    }

    cout<<ans;



    return 0;
}
#include <bits/stdc++.h>
using namespace std;

long long int max_damage(vector<long long int>& a, long long int k, long long int n){
    long long int damage = k;
    for(int i = 0; i < n - 1; i++)
        damage += min(k, a[i+1] - a[i]);
    
    return damage;
    
}

int main(){
    int t;
    cin>>t;

    while(t--){
        long long int n, h;
        cin>>n>>h;
        vector<long long int> seconds(n);
        for(int i = 0; i < n; i++)
            cin>>seconds[i];

        long long int low = 1;
        long long int high = h;
        long long int mid = low + (high - low)/2;
        long long int ans = mid;

        while(low <= high){
            mid = low + (high - low)/2;

            if(max_damage(seconds, mid, n) == h){
                ans = mid;
                break;
            }
            else if(max_damage(seconds, mid, n) > h){
                ans = mid;
                high = mid - 1;
            }
            else
                low = mid + 1;
        }

        cout<<ans<<endl;


    }



    return 0;
}
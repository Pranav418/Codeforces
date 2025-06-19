#include <bits/stdc++.h>
using namespace std;

long long int cubeRoot(long long int n){
    long long int ans = 1;
    while(ans * ans * ans < n)   
         ans++;
    
    return (ans * ans * ans) == n ? ans : ans - 1;
}

long long int squareRoot(long long int n){
    long long int ans = 1;
    while(ans * ans < n)   
         ans++;
    
    return (ans * ans) == n ? ans : ans - 1;
}

long long int ways(long long int m){
    long long int cuberoot = cubeRoot(m);
    long long int ans = 0;
    while(cuberoot >= 2){
        ans += m / (cuberoot * cuberoot * cuberoot);
        cuberoot--;
    }

    return ans;
}


int main(){

    long long int m;
    cin>>m;   

    long long int low = 1;
    long long int high = 1000000000000000000;
    long long int mid = low + (high - low)/2;
    long long int ans = -1;

    while(low <= high){
        mid = low + (high - low)/2;
        // cout<<low<<" "<<mid<<" "<<high<<endl;
        if(ways(mid) == m){
            ans = mid;
            high = mid - 1;
        }
        else if(ways(mid) < m){
            low = mid + 1;
        }
        else
            high = mid - 1;
    }

    cout<<ans;





    return 0;
}
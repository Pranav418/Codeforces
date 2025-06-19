#include<bits/stdc++.h>
using namespace std;
#define int long long int

int numbersLessThanOrEqualTo(int n, int target, int zero = 0){
    int sum = 0;
    for(int i = 1; i <= n; i++)    
        sum += max(n - target/i, zero);
    
    return n*n - sum;
}

signed main(){
    
    int n;
    cin>>n;

    int low = 1;
    int high = n*n;
    int mid;
    int ans = -1;

    while(low <= high){
        mid = low + (high - low)/2;
        // cout<<mid<<endl;
        if(numbersLessThanOrEqualTo(n, mid) > (n*n-1)/2){
            ans = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
            
        }

    }

    cout<<ans;
 


 
 
 
    return 0;
}
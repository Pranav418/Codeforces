#include<bits/stdc++.h>
using namespace std;
#define int long long int

int nC2(int n){
    return (n*(n-1))/2;
}

int remainder(int x, int y, int M){
    // cout<<"HERE: "<<y<<" : "<<M<<endl;
    if(x && (y != M - 1))
        return 1;
    else
        return 0;
}

signed main(){
    int n, m;
    cin>>n>>m;

    int min;
    int max;

    int team = n/m;
    int ans = 0;
    
    int low = 1;
    int high = m;
    int mid;
    int val = -1;
    
    while(low <= high){
        mid = low + (high - low)/2;
        int teams2 = ((n - team * mid) / (team + 1));
        bool divisible = ((n - team * mid) % (team + 1));

        if((teams2 + mid + remainder(divisible, teams2 + mid, m) == m)){
            val = mid;
            break;
        }
        else if((teams2 + mid + remainder(divisible, teams2 + mid, m) < m)){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }

    ans += val * nC2(team);
    ans += (m - val) * nC2(team + 1);

    cout<<ans<<" ";

    cout<<nC2(n - m + 1);

    return 0;
}
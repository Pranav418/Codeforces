#include<bits/stdc++.h>
using namespace std;
#define int long long int

int checkDistance(vector<int>& stalls, int distance, int cows){
    int previous = 0;
    int last = stalls.size() - 1;
    // cout<<"This: "<<distance*(cows + 1)<<" "<<stalls[stalls.size() - 1]<<" "<<stalls[0]<<endl;
    for(int i = 1; i < stalls.size(); i++){
        if( (stalls[i] - stalls[previous] >= distance) && (stalls[last] - stalls[i] >= distance) ){
            cows--;
            previous = i;
        }
            
    }

    return cows <= 0;
}

signed main(){
    int t;
    cin>>t;

    while(t--){
        int n, c;
        cin>>n>>c;
        vector<int> stalls(n);

        for(int i = 0; i < n; i++)
            cin>>stalls[i];

        sort(stalls.begin(), stalls.end());
        c -= 2;

        int low = 1;
        int high = 1e9;
        int mid;
        int ans = -1;

        while(low <= high){
            mid = low + (high - low)/2;
            // cout<<mid<<endl;
            if(checkDistance(stalls, mid, c)){
                ans = mid;
                low = mid + 1;
            }
            else
                high = mid - 1;
        }

        cout<<ans<<endl;

    }
    return 0;
}
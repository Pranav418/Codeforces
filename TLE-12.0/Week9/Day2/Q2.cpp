#include<bits/stdc++.h>
using namespace std;
#define int long long int



pair<bool, int> getCost(vector<int>& a, int x, bool head = true){
    int cost = 0;
    for(auto ele : a){
        cost += abs(ele - x);
        if(cost < 0 || cost > 1e18){
            cost = 1e18;
            break;
        }
    }
    if(head){
        int dplus = getCost(a, x + 1, false).second;               // checking for x + dx, if we have an increase then derivative is positive
        bool positiveSlope = false;
        if(dplus >= cost || cost == 1e18)
            positiveSlope = true;    

        return {positiveSlope, cost};
    }
    return {true, cost};

}

signed main(){


    int n;
    cin>>n;

    vector<int> a(n);

    for(int i = 0; i < n; i++)
        cin>>a[i];

    int low = 0;
    int high = 1e15;
    int mid;
    int ans = accumulate(a.begin(), a.end(), 0ll);
    // cout<<ans<<endl;
    while(low <= high){
        mid = low + (high - low)/2;
        int cost = getCost(a, mid).second;
        bool positiveSlope = getCost(a, mid).first;
        if(positiveSlope){
            ans = min(cost, ans);
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }

    }
    
    cout<<ans<<endl;

    return 0;
}
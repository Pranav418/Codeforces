#include<bits/stdc++.h>
using namespace std;
#define int long long int

//DO YOU WANT TO EXPLAIN YOUR APPROACH HERE?
//------------------------------------------------------------------------------------
// 30/30 -dist
 
//Common methods to solve:
//think in this order if nothing clicks:
// 1) DP/GREEDY
// 2) Bruteforce/optimised brutforce **IMP**
// 3) Precompute
// 4) Binary Search
// 5) Graphs - DFS/BFS
// 6) 2 pointers / Sliding Window
// 7) Deque + simulation instead of 2 pointers
// 8) Maps
// 9) Freq - Maps / Arrays
// 10) Solution in reverse traversal
// 11) PLOT GRAPHS : increasing/dec seq or math que
// 12) div 2c + div 3d + div 4e usually bruteforce+imple
// 13) div 2c + div 3e + div 4f usually algorithmic
// Debugging :
// 1) Check for boundary conditions of input
// 2) Test for random values  + write bruteforce
// 3) Min/Max - initialise by 1e18
// 4) Dont be stuck too long on the same approach think differently

signed main(){
    
    int t;
    cin>>t;

    while(t--){
        
        int n;
        cin>>n;

        vector<int> a(n);
        for(int i = 0; i < n; i++)
            cin>>a[i];

        sort(a.begin(), a.end());

        // for(int i = 0; i < n; i++)
        //     cout<<a[i]<<" ";
        
        int ans = 0;

        for(int i = 0; i < n - 1; i++){
            if(a[i] + a[i+1] <= a[n-1]){
                a[i] = a[n-1];
                ans++;
            }
        }

        cout<<ans<<endl;

    }


    return 0;
}
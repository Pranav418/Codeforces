#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main(){
    int t;
    cin>>t;

    while(t--){
        int n, m, v;
        cin>>n>>m>>v;

        vector<int> a(n);

        for(int i = 0; i < n; i++)
            cin>>a[i];

        vector<int> leftIndex, rightIndex;
        vector<int> prefixSum(n);
        prefixSum[0] = a[0];

        for(int i = 1; i < n; i++){
            prefixSum[i] = prefixSum[i-1] + a[i];
        }
            

        int lsum = 0;
        for(int i = 0; i < n; i++){
            lsum += a[i];

            if(lsum >= v){
                lsum = 0;
                leftIndex.push_back(i);
            }
            
        }

        int rsum = 0;
        for(int i = n - 1; i >= 0; i--){
            rsum += a[i];

            if(rsum >= v){
                rsum = 0;
                rightIndex.push_back(i);
            }
            
        }

        if(leftIndex.size() < m && rightIndex.size() < m){
            cout<<-1<<endl;
            continue;
        }

        int ans = 0;
        int L, R;
        for(int i = 0; i <= m; i++){
            if(i == 0){
                L = 0;
                if(rightIndex.size() >= m){
                    R = rightIndex[m-1] - 1;
                    if(R >= 0){
                        ans = max(prefixSum[R], ans);
                    }
                }
            }
            else{
                L = leftIndex[i - 1] + 1;
                if(L < n){
                    R = i != m ? rightIndex[m - i - 1] - 1: n - 1;
                    if(R >= 0){
                        ans = max(prefixSum[R] - prefixSum[L-1], ans);
                    }
                        
                }
            }
        }
        

        // for(int i = 1; i <= m; i++){
        //     // if( (m - i - 1 >= 0 && m - i - 1 < rightIndex.size()) && (i-1 >= 0 && i-1 < leftIndex.size()) && (rightIndex[m - i - 1] - 1 >= 0 && rightIndex[m - i - 1] - 1 < prefixSum.size()) && (leftIndex[i-1] && leftIndex[i-1] < prefixSum.size()))
        //     int rI = m - i - 1;
        //     int lI = i-1;

        //     if( m - i - 1 >= 0)
        //         ans = max(prefixSum[rightIndex[rI] - 1] - prefixSum[leftIndex[lI]], ans);
            
        // }
            

        cout<<ans<<endl;



    }
    return 0;
}
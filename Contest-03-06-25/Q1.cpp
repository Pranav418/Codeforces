#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main(){

    int t;
    cin>>t;
    while(t--){    
        
        int n;
        cin>>n;
        int ans = 1e12;
        vector<int> a(n);

        for(int i = 0; i < n; i++){
            cin>>a[i];
        }

        map<int, int> maxCount;
        for(auto ele : a)
            maxCount[ele] = 1;

        
        int prevVal = a[0];
        int prevFreq = 1;
        for(int i = 1; i < n; i++){
            if(a[i] == prevVal){
                prevFreq++;
            }
            else{
                maxCount[prevVal] = max(prevFreq, maxCount[prevVal]);
                prevVal = a[i];
                prevFreq = 1;
            }
        }
        maxCount[prevVal] = max(prevFreq, maxCount[prevVal]);
        


        for(auto ele : maxCount){
            ans = min(ele.first * (n - ele.second), ans);
        }

        cout<<ans<<endl;



    }
        


    
 
    return 0;
}
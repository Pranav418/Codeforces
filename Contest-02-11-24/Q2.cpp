#include <bits/stdc++.h>
using namespace std;
#define int long long int 


signed main(){

    int t;
    cin>>t;

    while(t--){
        int n, k;
        cin>>n>>k;


        vector<int> b(k);
        vector<int> c(k);

        unordered_map<int, int> freq;

        for(int i = 0; i < k; i++){
            cin>>b[i]>>c[i];
   
            
        }
        for(int i = 0; i < k; i++){
   
            freq[b[i]] += c[i];
        }
        int m = 0;
        int count = 0;
        priority_queue<int, vector<int>, greater<int>> PQ;
        for(auto ele : freq){
            
            if(PQ.size() < n)
                PQ.push(ele.second);
            
            else if(!PQ.empty() && ele.second > PQ.top()){
                PQ.pop();
                PQ.push(ele.second);
            }
            
            // cout<<ele.first<<" "<<ele.second<<endl;
            // if(count == n)
            //     break;
            // m += ele.second;    
            // count++;
        }

        while(!PQ.empty()){
            // cout<<PQ.top()<<endl;
            m += PQ.top();
            PQ.pop();
        }

        cout<<m<<endl;
        



    }

  
    
    return 0;
}
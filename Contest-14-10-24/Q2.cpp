#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main(){
    
    int t;
    cin>>t;
    while(t--){
        int n, x;
        cin>>n>>x;

        // if(n < x)
        //     x = n;
        vector<int> a(n);
        for(int i = 0; i < n; i++)
            cin>>a[i];

        sort(a.begin(), a.end(), greater<int>());

        priority_queue<int> PQ;

        for(int i = 0; i < n; i++)
            PQ.push(a[i]);

        int max = a[0];

        int ans = 0;
        while(!PQ.empty()){
            max = PQ.top();
            ans += max;
            int sum = 0;
            bool end = false;
            for(int i = 0; i < x; i++){
                int value = PQ.top();
                sum += value;
                PQ.pop();
                //check empty
                if(PQ.empty()){
                    end = true;
                    break;
                }
            }
            if(end)
                break;
            int extra = x*max - sum;
            while(!PQ.empty()){
                if(PQ.top() > extra){
                    int value = PQ.top();
                    PQ.pop();
                    PQ.push(value - extra);
                    break;
                }
                else{
                    extra -= PQ.top();
                    PQ.pop();
                }
            }
        }

        cout<<ans<<endl;
        
    }


    

    


    return 0;
}
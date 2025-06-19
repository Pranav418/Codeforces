#include<bits/stdc++.h>
using namespace std;
#define int long long int

const int MOD = 1e9 + 7;

signed main(){

    
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;

        string s;
        cin>>s;
        
        vector<int> a(n);
        for(int i = 0; i < n; i++)
            cin>>a[i];

       
        bool allZero = true;
        bool noZero = true;
        int sum = 0;
        for(int i = 0; i < n; i++){
            sum += a[i];
            if(s[i] == '1'){
                allZero = false;
            }
            if(s[i] == '0'){
                noZero = false;
            }      
        }
        if(allZero){
            
            cout<<"YES"<<endl;
            cout<<k<<" ";
            for(int i = 1; i < n; i++)
                cout<<0<<" ";
            cout<<endl;
            continue;
        }
        if(noZero){
            if(sum == k){
                cout<<"YES"<<endl;
                for(int i = 0; i < n; i++)
                    cout<<a[i]<<" ";
                cout<<endl;
            }
            else
                cout<<"NO"<<endl;
            continue;

        }
        bool greaterK = false;
        vector<int> sums(n);
        int currSum = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == '1'){
                currSum += a[i];
                if(currSum > k){
                    greaterK = true;
                    cout<<"NO"<<endl;
                    break;
                    
                }
            }
            else{
                currSum = 0;
            }
            sums[i] = currSum;
        }
        if(greaterK)
            continue;
        vector<int> b;

        if(s[0] == '0')
            b.push_back(0);

        
        for(int i = 1; i < n; i++){
            if(s[i] == '0' && s[i - 1] == '1'){
                b.push_back(sums[i - 1]);
                b.push_back(0);
            }
        }
        if(s[n - 1] == '1')
            b.push_back(sums[n - 1]);
        else
            b.push_back(0);

            cout<<"###############"<<endl;
            for(auto ele : b)
                cout<<ele<<" ";
            cout<<endl;
            cout<<"###############"<<endl;

        
        
        for(auto ele : b){
            if(ele > k){
                greaterK = true;
                cout<<"NO"<<endl;
                break;
            }
            
        }
        if(greaterK){
            continue;
        }
         
        int neg = 0;
        int pos = 0;
        for(auto ele : b){
            if(ele < 0) neg++;
            if(ele >= 0) pos++;
        }
        cout<<ele<<" ";

        string p = s;
        auto it = unique(p.begin(), p.end());
    
        p.erase(it, p.end());








    


    }


    return 0;
}
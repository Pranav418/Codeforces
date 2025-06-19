#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main(){

    int t;
    cin>>t;
    
    while(t--){    
        int n, k;
        string s;
        cin>>n>>k;
        cin>>s;

        unordered_map<char, int> freq;

        for(auto c : s)
            freq[c]++;
        
        int odd = 0;
        for(auto ele : freq)
            if(ele.second % 2)
                odd++;

        if(odd - k > 1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;

    }
        


    
 
    return 0;
}
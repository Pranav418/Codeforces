#include<bits/stdc++.h>
using namespace std;
#define int long long int

bool solve(set<int>& a, set<int>& b, int n){
    // if(*a.rbegin() == n){
    //     if(*b.begin() != 1)
    //         return false;
    // }

    // if(*a.begin() == 1){
    //     if(*b.upper_bound(1) == n)
    //         return false;
    // }

    for(auto ele : a){
        if(ele == 1){
            if(*b.upper_bound(1) == n)
                return false;
            else
                continue;
        } 

        if(ele == n){
            if(*b.begin() != 1)
                return false;
            else
                continue;
        }
        auto it = b.upper_bound(ele);
        if(it == b.end()){
            return false;
        }
        // if(*b.upper_bound(ele) > ele)
            
    }

    return true;
}

signed main(){

    int t;
    cin>>t;
    while(t--){    
        int n;
        cin>>n;
        string s;
        cin>>s;

        set<int> a, b;

        for(int i = 0; i < s.length(); i++){
            if(s[i] == 'A'){
                a.insert(i + 1);
            }
            else
                b.insert(i + 1);
        }
        // for(auto ele : a)
        //     cout<<ele<<" ";
        // cout<<endl;

        // for(auto ele : b)
        //     cout<<ele<<" ";
        // cout<<endl;

        if(solve(a, b, n))
            cout<<"Bob"<<endl;
        else
            cout<<"Alice"<<endl;

        



    }
        


    
 
    return 0;
}
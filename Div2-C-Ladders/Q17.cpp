#include <bits/stdc++.h>
using namespace std;
#define int long long int 

signed main(){

    int n;
    cin>>n;

    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin>>a[i];
    
    map<int, int> freq;

    for(int i = 0; i < n; i++)
        freq[a[i]]++;

    int space = freq.begin()->first;
    int piles = 1;
    int prev = -1;
    for(auto ele : freq){
        int current_freq = ele.second;
        if(current_freq <= piles){
            space += piles - current_freq + piles*(ele.first - prev - 1);
        }
        else{
            int required = current_freq - piles;
            if(space >= required)
                space -= required;
            else{
                required -= space;
                space = 0;
                piles += required/(ele.first + 1) + (required % (ele.first + 1) ? 1 : 0);
                
                if(required % (ele.first + 1))
                    space = (ele.first + 1) - required % (ele.first + 1);
            }
                
        }
        prev = ele.first;
    }
        

    cout<<piles;


    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main(){

        
        int n;
        cin>>n;
        string s;
        cin>>s;

        unordered_map<char, int> freq;
        unordered_set<char> count;

        for(int i = 0; i < n; i++)
            count.insert(s[i]);

        int pokemon = count.size();

        int i = 0;
        int j = 0;
        freq[s[j]]++;
        int window = INT_MAX;

        while(i < n && j < n){
            // cout<<i<<" "<<j<<endl;
            int w = j - i;
            if(freq.size() < pokemon){
                j++;
                freq[s[j]]++;
            }
            else{
                window = min(window, j - i + 1);
                freq[s[i]]--;
                if(freq[s[i]] == 0)
                    freq.erase(s[i]);
                i++;
            }
        }

        cout<<window<<endl;
        


    
 
    return 0;
}
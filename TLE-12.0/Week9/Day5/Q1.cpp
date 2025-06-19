#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main(){

        string s;
        cin>>s;

        string p = "hello";

        int i = 0;
        int j = 0;

        while(i < s.size() && j < p.size()){
            if(s[i] == p[j]){
                i++;
                j++;
            }
            else{
                i++;
            }
        }

        if(j == p.size())
            cout<<"YES";
        else
            cout<<"NO";
        


    
 
    return 0;
}
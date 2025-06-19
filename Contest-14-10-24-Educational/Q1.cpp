#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main(){
    
    int q;
    cin>>q;
    while(q--){
        string s, t;
        cin>>s;
        cin>>t;    

        if(s.length() < t.length()){
            string temp = s;
            s = t;
            t = temp;
        }
        int index = t.length();

        for(int i = 0; i < t.length(); i++){
            if(s[i] != t[i]){
                index = i;
                break;
            }
        }
        if(index)
            cout<<index + 1 + (t.length() - index) * 2 + s.length() - t.length()<<endl;
        else
            cout<<index + (t.length() - index) * 2 + s.length() - t.length()<<endl;

    }
    



    

    


    return 0;
}
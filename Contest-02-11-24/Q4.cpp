#include <bits/stdc++.h>
using namespace std;
#define int long long int 

void setVal(string& s, int index, int value){
    char c = value + '0';
    s[index] = c;
}

bool count(string& s, int index){
    int n = s.length();
    int r = min(n - 1, index + 3);
    // cout<<index<<endl;
    int count = 0;
    for(int i = index; i <= r; i++){        
        if(i - 3 >= 0 && s[i - 3] == '1' && s[i - 2] == '1' && s[i - 1] == '0' && s[i] == '0')
            count++;
    }

    
    return count;
}

int initial_1100s(string& s){
    int count = 0;
    for(int i = 3; i < s.length(); i++){
        if(i - 3 >= 0 && s[i - 3] == '1' && s[i - 2] == '1' && s[i - 1] == '0' && s[i] == '0')
            count++;
    }

    return count;
}

signed main(){

    int t;
    cin>>t;

    while(t--){

        string s;
        cin>>s;

        int q;
        cin>>q;

        vector<int> index(q);
        vector<int> value(q);

        int prev = initial_1100s(s);
        // cout<<prev<<" :::"<<endl;
        for(int i = 0; i < q; i++)
            cin>>index[i]>>value[i];
        
        for(int i = 0; i < q; i++){
            if(s.length() < 4)
                cout<<"NO"<<endl;
            else{
                int p = count(s, index[i] - 1);
                setVal(s, index[i] - 1, value[i]);
                int a = count(s, index[i] - 1);
                prev += (a - p);
                if(prev)
                    cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;
            }
        }

    }

  
    
    return 0;
}
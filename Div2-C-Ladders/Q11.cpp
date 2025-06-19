#include<bits/stdc++.h>
using namespace std;
#define int long long int

int val(char c){
    return c - 'a';
}

signed main(){
    string s;
    cin>>s;
    
    string s1 = "";
    
    char prev = s[0];
    s1 += prev;
    int length = 1;
    int x = 2;
    vector<char> b = {prev};
    vector<int> freq;
    for(int i = 1; i < s.length(); i++){
        if(prev == s[i]){
            length++;
        }
        else{
            freq.push_back(min(length, x));
            length = 1;
            prev = s[i];
            b.push_back(prev);
            
        }
        if(length < 3){
            s1 += s[i];
        }
            
    }

    freq.push_back(min(length, x));

    int n = b.size();
    int i = 0;
    int j = 0;
    while(i < n || j < n){
        // cout<<i<<" "<<j<<endl;
        if(j == n || freq[j] == 1){
            if(j - i > 1){
                // cout<<"||: "<<endl;
                for(int p = i; p < j; p++){
                    int index = p - i;
                    if(index % 2)
                        freq[index + i]--;
                }
                i = j;
            }
            else{
                i = j;
            }
            j++;
            i++;
            j = min(n, j);
            i = min(n, i);
        }
        else{
            j++;
        }
    }

    string s2 = "";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < freq[i]; j++){
            s2 += b[i];
        }
    }

    cout<<s2<<endl;

    return 0;
}
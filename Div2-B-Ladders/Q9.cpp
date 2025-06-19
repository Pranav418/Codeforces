#include<bits/stdc++.h>
using namespace std;
#define int long long int

bool isEven(char c){
    if( (c - '0') % 2 )
        return false;
    else 
        return true;
}

int value(char c){
    return (c - '0');
}

signed main(){
    string s;
    cin>>s;

    int n = s.length();
    bool even = false;
    int index = -1;
    for(int i = 0; i < n - 1; i++){
        if(isEven(s[i])){
            even = true;
            if(value(s[i]) < value(s[n - 1])){
                index = i;
                break;
            }
        }
    }

    if(!even){
        cout<<-1;
        return 0;
    }

    if(index != - 1){
        swap(s[index], s[n-1]);
        cout<<s;
        return 0;
    }
    else{
        for(int i = n - 2; i >= 0; i--){
            if(isEven(s[i])){
                swap(s[i], s[n-1]);
                break;
            }
        }
        cout<<s;
        return 0;
    }






    return 0;
}
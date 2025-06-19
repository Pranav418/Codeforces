#include<bits/stdc++.h>
using namespace std;

string timeStep(string s){
    for(int i = 1; i < s.length(); i++){
        if(s[i - 1] == 'B' && s[i] == 'G'){
            s[i] = 'B';
            s[i-1] = 'G';
            i++;
        }
    }

    return s;
}

int main(){
    int n, t;
    cin>>n>>t;
    string s;
    cin>>s;

    while(t--)
        s = timeStep(s);

    cout<<s<<endl;



    return 0;
}
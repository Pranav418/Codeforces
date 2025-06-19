#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main(){
    string s;
    cin>>s;
    int k;
    cin>>k;
    vector<int> A(26);
    for(int i = 0; i < 26; i++)
        cin>>A[i];

    int maxVal = 0;
    for(int i = 0; i < 26; i++)
        maxVal = max(A[i], maxVal);
    int sum = 0;
    for(int i = 0; i < s.length(); i++){
        sum += (A[s[i] - 'a'] * (i + 1));
        // cout<<sum<<endl;
    }
        

    for(int i = s.length() + 1; i < s.length() + k + 1; i++)
        sum += (i * maxVal);

    cout<<sum;
        


    return 0;
}
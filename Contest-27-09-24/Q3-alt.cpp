#include <bits/stdc++.h>
using namespace std;

bool checkDeck(long long int x, long long  int k, long long  int max_freq, long long  int cards){
    long long int N = ((cards + k)/x) * x;

    if(N/x >= max_freq && N >= cards)
        return true;
    return false;
}

int main(){

    int t;
    cin>>t;
    while(t--){
        long long int max_freq = 0;
        long long int cards = 0;
        long long int n, k;
        cin>>n>>k;
        vector<long long int> a(n);
        for(int i = 0; i < n; i++)
            cin>>a[i];

        for(int i = 0; i < n; i++){
            max_freq = max(a[i], max_freq);
            cards += a[i];
        }
            
        long long int ans = 1;
        for(int i = n; i >= 1; i--){
            if(checkDeck(i, k, max_freq, cards)){
                ans = i;
                break;
            }                
        }

        cout<<ans<<endl;
    }
    return 0;
}
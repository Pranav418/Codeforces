#include <bits/stdc++.h>
using namespace std;

long long int money(long long int x, long long int b, long long int s, long long int c, long long int pb, long long int ps, long long int pc, long long int cb, long long int cs, long long int cc){
    long long int zero = 0;
    return max(zero, x*cb - b)*pb + max(zero, x*cs - s)*ps + max(zero, x*cc - c)*pc;
}

int main(){
    string name;
    cin>>name;
    int b, s, c;
    cin>>b>>s>>c;

    long long int pb, ps, pc;
    long long int cb = 0, cs = 0, cc = 0;
    cin>>pb>>ps>>pc;

    for(int i = 0; i < name.length(); i++){
        if(name[i] == 'B') cb++;
        if(name[i] == 'S') cs++;
        if(name[i] == 'C') cc++;
    }

    long long int r;
    cin>>r;

    long long int burgers = 0;

    long long int low = 0;
    long long int high = r + 100;
    long long int mid = low + (high - low)/2;
    long long int ans = mid;

    while(low <= high){
        mid = low + (high - low)/2;
        // cout<<low<<" "<<mid<<" "<<high<<" "<<money(mid, b, s, c, pb, ps, pc, cb, cs, cc)<<endl;
        if(money(mid, b, s, c, pb, ps, pc, cb, cs, cc) == r){
            ans = mid;
            break;
        }
        else if(money(mid, b, s, c, pb, ps, pc, cb, cs, cc) < r){
            low = mid + 1;
            ans = mid;
        }
        else
            high = mid - 1;

    }

    cout<<ans;


    return 0;
}
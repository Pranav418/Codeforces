#include<bits/stdc++.h>
using namespace std;
#define int long long int

bool decorate(int x, int r, int g, int b){
    if(r + g + b < 3 * x)
        return false;

    vector<int> colors = {r, g, b};
    int index = 0;
    int max = -1;
    for(int i = 0; i < 3; i++){
        if(colors[i] > max){
            max = colors[i];
            index = i;
        }
            
    }

    int rest = 0;
    for(int i = 0; i < 3; i++){
        if(i == index)
            continue;
        rest += colors[i];
    }

    if(rest < x)
        return false;

    return true;
}

signed main(){
    int r, g, b;
    cin>>r>>g>>b;


    int low = 0;
    int high = (r + g + b)/3;
    int mid;
    int ans = -1;

    while(low <= high){
        mid = low + (high - low)/2;
        if(decorate(mid, r, g, b)){
            ans = mid;
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    

    cout<<ans<<endl;


    return 0;
}
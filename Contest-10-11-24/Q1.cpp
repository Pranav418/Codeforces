#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main(){
    int t;
    cin>>t;

    while(t--){
        int n, a, b;
        cin>>n>>a>>b;

        string s;
        cin>>s;

        int x = 0;
        int y = 0;

        bool yes = false;
        for(int i = 0; i < n; i++){
            if(s[i] == 'N')
                y++;
            if(s[i] == 'E')
                x++;
            if(s[i] == 'S')
                y--;
            if(s[i] == 'W')
                x--;

            if( (x == a) && (y == b) ) {
                cout<<"YES"<<endl;
                yes = true;
                break;
            }

        }
        if(yes){
            continue;
        }


        if( (x == 0) && (y == 0) ) {
                cout<<"NO"<<endl;
                
                continue;
            }
        int i = 0;
        while(abs(x) <= 40 && abs(y) <= 40){
            // cout<<x<<" "<<y<<endl;

            if(s[i] == 'N')
                y++;
            if(s[i] == 'E')
                x++;
            if(s[i] == 'S')
                y--;
            if(s[i] == 'W')
                x--;

            if( (x == a) && (y == b) ) {
                cout<<"YES"<<endl;
                yes = true;
                break;
            }
            
            i++;
            if(i == n)
                i = 0;
        }

        if(yes){
            continue;
        }
        else
            cout<<"NO"<<endl;
            
        


    }
    return 0;
}
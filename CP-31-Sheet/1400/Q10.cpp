#include<bits/stdc++.h>
using namespace std;
#define int long long int


signed main(){

    int t;
    cin>>t;
    while(t--){    
        int n, m;
        cin>>n>>m;
        int p2 = 0;
        int p5 = 0;

        int n1 = n, n2 = n;
        while(n1){
            if(n1 % 2)
                break;
            n1 /= 2;
            p2++;
        }
        while(n2){
            if(n2 % 5)
                break;
            n2 /= 5;
            p5++;
        }
        // cout<<p2<<" "<<p5<<endl;
        int mi = min(p2, p5);
        p2 -= mi;
        p5 -= mi;
        // cout<<p2<<" "<<p5<<endl;
        int value = 1;
        while(p2--){
            if(value * 5 > m)
                break;
            value *= 5;
        }

        while(p5--){
            if(value * 2 > m)
                break;
            value *= 2;

        }

        while((m / value) > 10){
            value *= 10;
        }

        // if(((m / value) * value * n) == 0)
        //     cout<<"THis: "<<value<<endl;
        cout<<(m / value) * value * n<<endl;

    }
        


    
 
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n, m, q;
        cin>>n>>m>>q;
        
        int m1, m2;
        cin>>m1>>m2;

        if(m1 > m2)
            swap(m1, m2);

        int d;
        cin>>d;

        bool caught = false;
        int steps = 0;
       
        if(m1 < d && m2 > d){
            if( (m2 - m1) % 2 ){
                cout<<(m2 - m1 - 1)/2<<endl;
            }
            else{
                cout<<(m2 - m1)/2<<endl;
            }
            continue;

        }    

        if(abs(m1 - d) < abs(m2 - d)){
            cout<<m1 - 1<<endl;
        }
        else{
            cout<<n-m2<<endl;
        }
        

        



        

    }
    return 0;
}
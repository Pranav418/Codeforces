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

        int d;
        cin>>d;

        bool caught = false;
        int steps = 0;
        while(!caught){
            // cout<<m1<<" "<<m2<<" "<<d<<endl;
            if(abs(m1 - d) < abs(m2 - d)){
                if(m1 < d){
                    d = min(d+1, n);
                }
                else{
                    d = max(d-1, n);
                }
            }
            else{
                if(m2 < d){
                    d = min(d+1, n);
                }
                else{
                    d = max(d-1, n);
                }
            }
            steps++;

            if(m1 == d || m2 == d){
                caught = true;
                break;
            }

            if(m1 < d){
                m1 = m1 + 1;
            }
            else
                m1 = m1 - 1;

            if(m2 < d){
                m2 = m2 + 1;
            }
            else
                m2 = m2 - 1;

            if(m1 == d || m2 == d){
                caught = true;
                break;
            }
            
        }

        cout<<steps<<endl;



        

    }
    return 0;
}
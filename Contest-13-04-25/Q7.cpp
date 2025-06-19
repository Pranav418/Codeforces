#include<bits/stdc++.h>
using namespace std;
#define int long long int



signed main(){

    int t;
    cin>>t;

    while(t--){
        int q;
        cin>>q;

        deque<int> a;
        int rizzy = 0;
        int sum = 0;
        bool reverse = false;
        while(q--){
            int s, k;
            cin>>s;
    
            if(s == 3){
                cin>>k;
    
                if(!reverse)
                    a.push_back(k);
                else
                    a.push_front(k);
                int n = a.size();
                sum += k;
                rizzy += n * k;

                cout<<rizzy<<endl;
                
            }
            else if(s == 1){
                int n = a.size();
                if(!reverse){
                    rizzy += sum - n*a.back();
                    cout<<rizzy<<endl;
                    a.push_front(a.back());
                    a.pop_back();
                }
                else{
                    rizzy += sum - n*a.front();
                    cout<<rizzy<<endl;
                    a.push_back(a.front());
                    a.pop_front();
                }
                
            }
            else{
                int n = a.size();
                rizzy += ((n + 1)*sum - 2*rizzy);
                cout<<rizzy<<endl;
                reverse = !reverse;
            }
        }


        

        
    
    }
    
    return 0;
}
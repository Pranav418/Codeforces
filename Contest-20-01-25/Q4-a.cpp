#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main(){

    
    int t;
    cin>>t;

    while(t--){
        
        int n, m;
        cin>>n>>m;

        vector<int> a(n);

        for(int i = 0; i < n; i++)
            cin>>a[i];

        vector<int> b(m);

        for(int i = 0; i < m; i++)
            cin>>b[i];

        int sum1 = 0;
        int sum2 = 0;

        for(int i = 0; i < n; i++)
            sum1 += a[i];

        for(int i = 0; i < m; i++)
            sum2 += b[i];

        if(sum1 != sum2){
            cout<<"NO"<<endl;
            continue;
        }

        multiset<int> s1;
        multiset<int> s2;

        for(int i = 0; i < n; i++)
            s1.insert(a[i]);

        for(int i = 0; i < m; i++)
            s2.insert(b[i]);

        multiset<int> s;

        // set_difference(make_move_iterator(s1.begin()), 
        //             make_move_iterator(s1.end()), 
        //             s2.begin(), s2.end(), 
        //             inserter(s, s.begin()));

        bool valid = true;
        auto it2 = s2.begin();
        for (auto it = s1.begin(); it != s1.end() || it2 != s2.end();){
            cout<<*it<<endl;
            cout<<*it2<<endl;
            if(s1.size() < s2.size()){
                valid = false;
                break;
            }
            if(s1.find(*it2) != s1.end()){
                cout<<"HERE"<<endl;
                s1.erase(s1.find(*it2));
                s2.erase(it2);
                cout<<"Not HERE"<<endl;
            }

            else{
                auto t1 = it;
                auto t2 = next(it, 1);
                if(t2 == s1.end()){
                    valid = false;
                    break;
                }
                int x = (*t1 + *t2);
                cout<<"t1: "<<*t1<<endl;
                cout<<"t2: "<<*t2<<endl;
                cout<<"X: "<<x<<endl;
                s1.erase(t1);
                s1.erase(t2);
                auto pos = s2.find(x);
                if(pos == s2.end()) 
                    s1.insert(x);
                else{
                    it2++;
                }
            }


        }
            
            

        

        

        
    }
    
 
    return 0;
}
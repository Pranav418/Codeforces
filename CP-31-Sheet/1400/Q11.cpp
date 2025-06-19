#include<bits/stdc++.h>
using namespace std;
#define int long long int

bool check(int x, int y){
    if(x % 10 == 0)
        return x == y;
    
    if(x % 10 == 5)
        return (x == y || (x + 5 == y));
   
    set<int> a = {x};
    set<int> b = {y};

    if(x % 2){
        x += (x % 10);
        a.insert(x);
    }
        

    if(y % 2){
        y += (y % 10);
        b.insert(y);
    }
        
    
    x += ((y - x)/20)* 20;
    a.insert(x);

    for(int i = 0; i < 9; i++){
        x += x % 10;
        a.insert(x);
    }


    for(int i = 0; i < 9; i++){
        y += y % 10;
        b.insert(y);
    }
    set<int> result;
    set_intersection(a.begin(), a.end(), b.begin(), b.end(),
    inserter(result, result.begin()));

    return (result.size() > 0);
}

signed main(){

    int t;
    cin>>t;
    while(t--){    
        int n;
        cin>>n;

        vector<int> a(n);

        for(int i = 0; i < n; i++)
            cin>>a[i];

        sort(a.begin(), a.end());


        bool noSolution = false;
        for(int i = 0; i < n - 1; i++){
            if(!check(a[i], a[i + 1]))
                noSolution = true;
        }
        if(noSolution)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;

    }
        


    
 
    return 0;
}
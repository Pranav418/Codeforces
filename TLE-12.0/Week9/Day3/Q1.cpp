#include<bits/stdc++.h>
using namespace std;
#define int long long int

struct Pointer{
    int pos = 0;
    int books = 0;
    int time = 0;
    int pagesLeft = 0;
    int increment = 1;
}

signed main(){


    int n;
    cin>>n;

    vector<int> a(n);
    int sum = 0;
    for(int i = 0; i < n; i++){
        cin>>a[i];
        sum += a[i];
    }
        
    sort(a.begin(), a.end());
    
    Pointer I, J;
    J.pos = n - 1;
    J.increment = -1;
    I.pagesLeft = a[I.pos];
    J.pagesLeft = a[J.pos];
    while(I.books < n || J.books < n){
        int i = I.pos;
        int j = J.pos;
        cout<<i<<" "<<j<<endl;

        if(i == j){
            if(J.pagesLeft < I.pagesLeft){
                I.pos = n - 1;
                I.increment = -1;
                I.pagesLeft = a[I.pos];
            }
            else{
                J.pos = n - 1;
                J.increment = 1;
                J.pagesLeft = a[J.pos];                
            }
        }

        if(I.pagesLeft <= J.pagesLeft){
            J.pagesLeft = (J.pagesLeft - I.pagesLeft);
            I.time += I.pagesLeft;
            I.pagesLeft = 0;
            I.pos += I.increment;
            I.books++;
            I.pagesLeft = a[I.pos];
        }

        else{
            I.pagesLeft = (I.pagesLeft - J.pagesLeft);
            J.time += J.pagesLeft;
            J.pagesLeft = 0;
            J.pos += j.increment;
            J.books++;
            J.pagesLeft = a[J.pos];
        }
    }


    cout<<max(I.time, J.time)<<endl;
    return 0;
}
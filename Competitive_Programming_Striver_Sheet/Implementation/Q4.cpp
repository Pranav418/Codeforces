#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int limiting = min(k*l/nl, c*d);
    limiting = min(limiting, p/np);
    cout<<limiting/n;
    return 0;
}
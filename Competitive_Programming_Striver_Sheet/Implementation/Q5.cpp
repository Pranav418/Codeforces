#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b, c;
    cin>>a>>b>>c;

    int end = max(max(a, b), c);
    int start = min(min(a, b), c);
    cout<<end - start;
    return 0;
}
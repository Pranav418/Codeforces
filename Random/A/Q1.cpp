#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int minimum = 0;
    int maximum = 0;
    maximum = ((n+5)/7)*2;
    if( (n + 6) % 7 == 0) maximum++;

    minimum = (n/7)*2;
    if( (n + 1) % 7 == 0) minimum++;
    cout<<minimum<<" "<<maximum;


    return 0;
}
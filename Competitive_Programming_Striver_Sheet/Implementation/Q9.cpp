#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    vector<int> a(n);

    for(int i = 0; i < n; i++)
        cin>>a[i];

    int max_index, min_index;
    int maximum = INT_MIN, minimum = INT_MAX;
    for(int i = 0; i < n; i++){
        if(a[i] > maximum){
            maximum = a[i];
            max_index = i;
        }

        
    }

    for(int i = n - 1; i >= 0; i--){
        if(a[i] < minimum){
            minimum = a[i];
            min_index = i;
        }
        
    }
    int ans = max_index + (n - 1 - min_index);
    if(max_index > min_index) ans--;

    cout<<ans<<endl;
    
    return 0;
    
}
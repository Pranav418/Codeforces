#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n, k;
    cin >> n >> k;
    k /= 2;
    vector<int> a(n);
    for (auto &it: a) cin >> it;
    if (2 * k == n) {
        int mex = 1;
 
        for(int i = 1; i < n; i+=2){
            if(a[i] == mex){
                mex++;
            }
            else
                break;
        }

        cout<<mex<<endl;
        
    } else {
        k = 2*k;
        bool one = false;
        for (int i = 1; i <= n - k + 1; i++) {
            if (a[i] != 1) {
                cout << "1\n";
                one = true;
                break;
                
            }
        }
        if(!one)
            cout << "2\n";
    }
}
 
int main() {
    int T = 1;
    cin >> T;
    while (T--) {
        solve();
    }
}
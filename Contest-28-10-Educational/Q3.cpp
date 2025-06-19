#include<bits/stdc++.h>
using namespace std;
#define int long long int

void solve() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	long long ans = 0, cnt = 0;
	for (int i = n - 1; i >= 0; i--) {
		if (s[i] == '1' && cnt < i) {
			cnt++;
			continue;
		}
		cnt = max(cnt - 1, 0ll);
		ans += i + 1;
	}
	cout << ans << '\n';
}

signed main(){
    
    int t;
    cin>>t;
    while(t--){
      solve();
    }

    return 0;
}
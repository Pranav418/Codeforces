#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool check(const vector<int>& h, int x) {
    int n = h.size();
    vector<int> extra(n, 0);
    vector<int> h_copy = h;

    for (int i = n - 1; i >= 2; --i) {
        if (h_copy[i] + extra[i] < x) {
            return false;
        }

        int d = min(h[i], h_copy[i] + extra[i] - x) / 3;
        extra[i - 1] += d;
        extra[i - 2] += 2 * d;
    }

    if (h_copy[0] + extra[0] >= x && h_copy[1] + extra[1] >= x) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> h(n);
        for (int i = 0; i < n; ++i) {
            cin >> h[i];
        }

        int left = 1;
        int right = *max_element(h.begin(), h.end());
        int ans = 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (check(h, mid)) {
                ans = mid;
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        cout << ans << endl;
    }
    return 0;
}
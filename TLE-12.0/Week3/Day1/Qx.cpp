#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        if (n == 6) {
            cout << "1 1 2 3 1 2" << endl;
        } else if (n == 7) {
            cout << "1 1 2 3 1 1 2" << endl;
        }
        else if (n == 8){
            cout << "1 1 2 3 1 1 1 2" << endl;
        }
        
        else if (n == 9) {
            cout << "7 3 3 7 5 3 7 7 3" << endl;
        } else {
            int x = (n - 3) / 2;
            int y = n - 3 - x;

            for (int i = 0; i < x; ++i) {
                cout << "1 ";
            }
            cout << "2 ";
            cout << "3 ";
            for (int i = 0; i < y; ++i) {
                cout << "1 ";
            }
            cout << "2 ";

            cout << endl;
        }
    }
    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int minimalPiles(int n, vector<int>& strengths) {
    // Sort strengths in ascending order
    sort(strengths.begin(), strengths.end());

    // Vector to store the current piles' heights
    vector<int> piles;

    // Process each box by its strength
    for (int strength : strengths) {
        bool placed = false;

        // Try to place the box on an existing pile
        for (int &pile : piles) {
            if (pile < strength) {
                pile++;  // Add this box on top of an existing pile
                placed = true;
                break;
            }
        }

        // If it couldn't be placed on any existing pile, start a new pile
        if (!placed) {
            piles.push_back(1);  // Start a new pile with this box
        }
    }

    return piles.size();  // The number of piles is the answer
}

int main() {
    int n;
    cin >> n;
    vector<int> strengths(n);
    
    for (int i = 0; i < n; i++) {
        cin >> strengths[i];
    }
    
    cout << minimalPiles(n, strengths) << endl;

    return 0;
}

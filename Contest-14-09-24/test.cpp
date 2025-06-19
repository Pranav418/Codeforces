#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int greatestlesser(int key, vector<int>& a)
{
    int low = 0, high = a.size() - 1;
    int ans = -1;
 
    while (low <= high) {
        int mid = low + (high - low + 1) / 2;
        int midVal = a[mid];
 
        if (midVal < key) {
            ans = mid;
            low = mid + 1;
        }
        else if (midVal > key) 
            high = mid - 1;
        else if (midVal == key)
            high = mid - 1;
        
    }
 
    return ans;
}

int main(){
    // Input vector containing sorted integers
    vector<int> v{10, 20, 30, 30, 30, 40, 50};
    cout<<greatestlesser(51, v);
    // Print the contents of the vector
    

    return 0; 
}
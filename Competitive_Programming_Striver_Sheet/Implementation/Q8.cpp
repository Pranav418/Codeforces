#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    unordered_map<string, int> faces = {
        {"Tetrahedron", 4},
        {"Cube", 6},
        {"Octahedron", 8},
        {"Dodecahedron", 12},
        {"Icosahedron", 20},
    };
    int ans = 0;
    while(n--){
        string s;
        cin>>s;
        ans += faces[s];
    }
    cout<<ans;
    return 0;
    
}
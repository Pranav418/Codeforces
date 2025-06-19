#include<bits/stdc++.h>
using namespace std;
#define int long long int

int query(int i, int j){
    cout<<"? "<<i<<" "<<j<<endl;
    int product;
    cin>>product;

    return product;
}

int P1(int p1, int p4, unordered_map<int, vector<int>>& hashmap){
    vector<int> v1, v2;
    v1 = hashmap[p1];
    v2 = hashmap[p4];

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            if(v1[i] == v2[j])
                return v1[i];
        }
    }

    return -1;
}

signed main(){

    vector<int> a(6);
    int TOTAL = 7418880;

    int p1, p2, p3;

    p1 = query(1, 2);
    p2 = query(3, 4);
    p3 = TOTAL / (p1 * p2);

    vector<int> sp = {4, 8, 15, 16, 23, 42};
    unordered_map<int, vector<int>> hashmap;
    for(int i = 0; i < 6; i++){
        for(int j = i + 1; j < 6; j++){
            hashmap[sp[i] * sp[j]] = {sp[i], sp[j]};
        }
    }  

    int p4 = query(1, 6);
    a[0] = P1(p1, p4, hashmap);
    a[1] = p1/a[0];
    a[5] = p4/a[0];
    a[4] = p3/a[5];

    int p5 = query(4, 5);
    a[3] = p5/a[4];
    a[2] = p2/a[3];


    cout<<"! ";
    for(auto ele : a)
        cout<<ele<<" ";

    cout<<endl;
    
    return 0;
}
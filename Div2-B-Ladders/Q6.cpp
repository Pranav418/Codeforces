#include<bits/stdc++.h>
using namespace std;
// #define int long long int
signed main(){
    int n;
    cin>>n;

    vector<int> a(n);
    vector<int> b(n);
    for(int i = 0; i < n; i++)
        cin>>a[i];

    b = a;

    sort(b.begin(), b.end());

    bool sorted = true;
    int I = 0;
    for(int i = 1; i < n; i++){
        if(a[i] < a[i - 1]){
            I = i - 1;
            sorted = false;
            break;
        }
    }

    int J = n - 1;

    for(int j = n - 2; j >= 0; j--){
        if(a[j] > a[j + 1]){
            J = j + 1;
            break;
        }
    }

    if(!sorted){
        // cout<<"THIS: "<<I<<" : "<<J<<endl;
        vector<int> values = {I, J};
        while(I < J){
            swap(a[I], a[J]);
            I++;
            J--;
        }
        bool valid = true;
        for(int i = 0; i < n; i++){
            if(a[i] != b[i]){
                valid = false;
                break;
            }
        }

        if(!valid)
            cout<<"no";
        else{
            cout<<"yes"<<endl;
            cout<<values[0] + 1<<" "<<values[1] + 1;
        }   
            
    }
    else{
        cout<<"yes"<<endl;
        cout<<1<<" "<<1;
    }


    



    return 0;
}
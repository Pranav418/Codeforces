#include<bits/stdc++.h>
using namespace std;

int main(){
    int m, s;
    cin>>m>>s;

    string max = "";
    string min = "";
    if(m == 1 && s == 0){
        cout<<0<<" "<<0;
        return 0;
    }


    if(s > 9*m || s < 1){
        cout<<-1<<" "<<-1;
        return 0;
    }
        

    int S = s;
    while(S > 9){
        max += '9';
        S -= 9;
    }

    max += ('0' + S);

    for(int i = max.size(); i < m; i++){
        max += '0';
    }

    

    reverse(max.begin(), max.end());
    min = max;

    if(min[0] == '0'){

        for(int i = 0; i < min.size(); i++){
            if(min[i] != '0'){
                min[i] = min[i] - 1;
                min[0] = '1';
                break;
            }
        }
    }
    reverse(max.begin(), max.end());
    cout<<min<<" "<<max;

    return 0;
}
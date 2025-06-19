#include<bits/stdc++.h>
using namespace std;
#define int long long int



signed main(){

    int a, b, c, m;
    cin>>a>>b>>c;
    cin>>m;
    vector<int> cost(m);
    vector<string> type(m);
    
    
    for(int i = 0; i < m; i++){
        cin>>cost[i];
        cin>>type[i];
    }

    int money = 0;
    int computers = 0;

    priority_queue<int, vector<int>, greater<int>> USB;
    priority_queue<int, vector<int>, greater<int>> PS_2;

    for(int i = 0; i < m; i++){
        if(type[i] == "USB")
            USB.push(cost[i]);
        else
            PS_2.push(cost[i]);
    }

    while( (a || b || c) && (USB.size() || PS_2.size()) ){
        int top1 = USB.empty() ? INT_MAX : USB.top();
        int top2 = PS_2.empty() ? INT_MAX : PS_2.top(); 

        if(top1 < top2){
            
            if(a){
                a--;
                money += USB.top();
                computers++;
                USB.pop();
            }
            else if(c){
                c--;
                money += USB.top();
                computers++;
                USB.pop();
            }
            else
                priority_queue<int, vector<int>, greater<int>>().swap(USB);

            
        }
        else{
            if(b){
                b--;
                money += PS_2.top();
                computers++;
                PS_2.pop();
            }
            else if(c){
                c--;
                money += PS_2.top();
                computers++;
                PS_2.pop();
            }
            else
                priority_queue<int, vector<int>, greater<int>>().swap(PS_2);
        }
    }

    cout<<computers<<" "<<money<<endl;
    


    return 0;
}
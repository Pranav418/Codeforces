#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        string s;
        bool end = false;
        bool append = true;
        while(!end){
            if(append)
                s += "0";

            cout<<"? " + s<<endl;
            bool response;
            cin>>response;

            if(response){
                append = true;
                if(s.length() == n)
                    end = true;
            }
            else if(s[s.length() - 1] == '0'){
                s[s.length() - 1] = '1';
                append = false;
            }
            else{
                end = true;
                s.erase(s.length() - 1);
            }
        }

        if(s.length() == n){
            cout<<"! "<<s<<endl;
            continue;
        }

        while(s.length() < n){
            s = "0" + s;

            cout<<"? " + s<<endl;
            bool response;
            cin>>response;

            if(response){

            }
            else if(s[0] == '0'){
                s[0] = '1';
            }
        }

        cout<<"! "<<s<<endl;
        



    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        string s = "";
        vector<char> ans(n, 'z');
        int index = 0;
        vector<char> l = {'a', 'e', 'i', 'o', 'u'};

        int repeat = n/5 + 1;
        int stop = n % 5;

        for(int i = 0; i < 5; i++){
            if(stop)
                stop--;
            else
                repeat = n/5;
            for(int j = 0; j < repeat; j++)
                s += l[i];   
        }
        cout<<s<<endl;

    }
    return 0;
}
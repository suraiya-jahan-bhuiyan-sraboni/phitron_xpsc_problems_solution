#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    map<string,int> map;
    while(t--){
        string s;
        cin>>s;
        map[s]++;
        if(map[s]==1){
            cout<<"OK"<<endl;
        }else{
            cout<<s<<map[s]-1<<endl;
        }

    }

    return 0;
}
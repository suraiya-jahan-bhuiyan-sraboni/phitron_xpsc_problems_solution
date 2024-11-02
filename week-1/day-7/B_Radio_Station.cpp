#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int n,m;
     cin>>n>>m;
     map<string,string> map;
     while(n--){
        string b,a;
        cin>>b>>a;
        map[a]=b;
     }
     while(m--){
        string a,b;
        cin>>a>>b;
        b.pop_back();
        cout<<a<<" "<<b<<"; #"<<map[b]<<endl;
     }

    return 0;
}
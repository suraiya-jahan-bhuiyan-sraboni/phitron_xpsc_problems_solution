#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s,t;
    cin>>s>>t;
    int c=0,n=s.size();
    for(int i=0;i<n;i++){
        if(s[i]!=t[i]){
            c++;
        }
    }
    cout<<c<<endl;

    return 0;
}
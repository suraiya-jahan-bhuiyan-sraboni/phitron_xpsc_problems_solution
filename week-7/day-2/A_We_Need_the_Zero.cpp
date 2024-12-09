#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        int x=0;
        for(auto&e :a){
            cin>>e;
            x^=e;
        }
        if(x==0){
            cout<<0<<endl;
        }else{
            if(n%2!=0){
                cout<<x<<endl;
            }else{
                cout<<-1<<endl;
            }
        }
    }

    return 0;
}
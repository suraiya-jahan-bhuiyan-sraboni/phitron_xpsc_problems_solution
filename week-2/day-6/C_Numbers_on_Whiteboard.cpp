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
        list<int> l;
        vector<pair<int,int>> v;
        for(int i=1;i<=n;i++){
            l.push_back(i);
        }
        for(int i=1;i<=n-1;i++){
            int x,y;
            x=l.back();
            l.pop_back();
            y=l.back();
            l.pop_back();
            v.push_back({x,y});
            l.push_back(ceil(float(x+y)/2));
        }
        cout<<"2"<<endl;
        for(auto [x,y]:v){
            cout<<x<<" "<<y<<endl;
        }
    }

    return 0;
}
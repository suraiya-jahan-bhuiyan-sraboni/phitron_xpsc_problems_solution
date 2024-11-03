#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,x;
    cin>>n>>x;
    vector<int>a;
    for(int i=0;i<n;i++){
        int e;
        cin>>e;
        if(e!=x){
            a.push_back(e);
        }
    }
    if(!a.empty()){
        for(auto e:a){
            cout<<e<<" ";
        }
        cout<<endl;
    }else{
        cout<<endl;
    }
    return 0;
}
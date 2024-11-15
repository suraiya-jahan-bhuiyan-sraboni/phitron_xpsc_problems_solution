#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    vector<int>v1(n),v2(m),v3;
    for(auto&e:v1) cin>>e;
    for(auto&e:v2) cin>>e;
    int p1 = 0, p2 = 0;
    while (p1 < n || p2 < m)
    {
        if (p1 == n)
            v3.push_back(v2[p2++]);
        else if (p2 == m)
            v3.push_back(v1[p1++]);
        else if (v1[p1] < v2[p2])
            v3.push_back(v1[p1++]);
        else
            v3.push_back(v2[p2++]);
    }
    for(auto e:v3){
        cout<<e<<" ";
    }
    cout<<endl;
    return 0;
}
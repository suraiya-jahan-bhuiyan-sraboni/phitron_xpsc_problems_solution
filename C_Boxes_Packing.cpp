#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    vector<int> v(t);
    while (t--)
    {
       int x;
       cin>>x;
       v.push_back(x);
    }  
    int max = *max_element(v.begin(), v.end());
    cout << count(v.begin(), v.end(), max) << endl;
    return 0;
}
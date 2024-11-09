#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
    cin >> n;
    vector<int> a(n);
    map<int, int> map;
    set<int> b;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        map[a[i]]++;
        b.insert(a[i]);
        b.insert(a[i] + 1);
    }
    int last = 0;
    int r = 0;
    for (auto x: b) {
        int c = map[x];
        r += max(0, c - last);
        last = c;
    }
    cout << r << endl;

    }
    return 0;
}
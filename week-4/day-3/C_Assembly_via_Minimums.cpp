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
        int m = n * (n - 1) / 2, b[m];
        for (int i = 0; i < m; i++)
            cin >> b[i];
        sort(b, b + m);
        for (int i = 0; i < m; i += --n)
            cout << b[i] << ' ';
        cout << "1000000000"<<endl;
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int x,y;
        int cnt = 0;
        cin >> x >> y;
        int res = y / 2;
        cnt += res + y % 2;
        x = x - res * 7 - (y % 2) * 11;
        if (x > 0)
        {
            if (x % 15)
                cnt++;
            cnt += (x / 15);
        }
        cout << cnt << "\n";
    }

    return 0;
}
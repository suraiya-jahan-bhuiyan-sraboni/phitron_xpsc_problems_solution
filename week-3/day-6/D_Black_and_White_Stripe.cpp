#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int i = 0, j = 0, cnt = n, w = 0;
        while (j < n)
        {
            if (s[j] == 'W')
                w++;
            if (j - i + 1 == k)
            {
                cnt = min(cnt, w);
                if (s[i] == 'W')
                    w--;
                i++;
            }
            j++;
        }
        cout << cnt << endl;
    }

    return 0;
}
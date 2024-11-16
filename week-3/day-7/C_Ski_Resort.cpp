#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k, q;
        cin >> n >> k >> q;
        vector<long long> a(n);

        for (long long i = 0; i < n; i++)
        {

            cin >> a[i];
        }

        long long l = 0, ans = 0, p = 0;
        while (l < n)
        {
            if (a[l] <= q)
                p++;
            else
            {
                p = 0;
            }

            ans += max(0LL, p - k + 1);
            l++;
        }

        cout << ans << endl;
    }
}
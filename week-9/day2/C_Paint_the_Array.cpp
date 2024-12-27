#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<long long> a(n);
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        long long gcd_odd = 0, gcd_even = 0;
        for (long long i = 0; i < n; i += 2)
        {
            gcd_even = __gcd(gcd_even, a[i]);
        }
        for (long long i = 1; i < n; i += 2)
        {
            gcd_odd = __gcd(gcd_odd, a[i]);
        }
        long long ans = 0;
        bool ok = true;
        for (long long i = 0; i < n; i += 2)
        {
            if (a[i] % gcd_odd == 0)
            {
                ok = false;
            }
        }
        if (ok)
        {
            ans = gcd_odd;
        }
        else
        {
            ok = true;
            for (long long i = 1; i < n; i += 2)
            {
                if (a[i] % gcd_even == 0)
                {
                    ok = false;
                }
            }
            if (ok)
            {
                ans = gcd_even;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
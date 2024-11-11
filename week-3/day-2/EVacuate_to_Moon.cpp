#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;
    while (t--)
    {
        long long n, m, h;
        cin >> n >> m >> h;
        vector<long long> energy(n), power(m);
        for (auto &e : energy)
            cin >> e;
        for (auto &e : power)
            cin >> e;
        sort(energy.rbegin(), energy.rend());
        sort(power.rbegin(), power.rend());
        long long ans = 0;
        for (long long i = 0; i < min(m, n); i++)
        {
            ans += min(energy[i], power[i] * h);
        }

        cout << ans << endl;
    }

    return 0;
}
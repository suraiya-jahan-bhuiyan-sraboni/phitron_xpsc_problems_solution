#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;

    long long lcm_ab = (a * b) / __gcd(a, b);
    long long red_chocolates = (n / a) * p;
    long long blue_chocolates = (n / b) * q;
    long long common_chocolates = (n / lcm_ab) * min(p, q);

    long long total_chocolates = red_chocolates + blue_chocolates - common_chocolates;

    cout << total_chocolates << endl;

    return 0;
}
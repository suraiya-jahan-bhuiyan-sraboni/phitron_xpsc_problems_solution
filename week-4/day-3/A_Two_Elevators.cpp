#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, c;
        cin >> a >> b >> c;
        long long d1, d2;
        d1 = a - 1;
        d2 = abs(b - c) + c - 1;
        if (d1 < d2)
        {
            cout << 1 << endl;
        }
        else if (d1 > d2)
        {
            cout << 2 << endl;
        }
        else
        {
            cout << 3 << endl;
        }
    }

    return 0;
}
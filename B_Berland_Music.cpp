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
        int n;
        cin >> n;

        vector<int> p(n);
        string s;

        for (int i = 0; i < n; ++i)
        {
            cin >> p[i];
        }

        cin >> s;

        vector<pair<int, int>> l, d;

        for (int i = 0; i < n; ++i)
        {
            if (s[i] == '0')
            {
                d.push_back({p[i], i});
            }
            else
            {
                l.push_back({p[i], i});
            }
        }

        sort(d.begin(), d.end());
        sort(l.begin(), l.end());

        vector<int> q(n);

        for (int i = 0; i < d.size(); ++i)
        {
            q[d[i].second] = i + 1;
        }

        int size = d.size();
        for (int i = 0; i < l.size(); ++i)
        {
            q[l[i].second] = size + i + 1;
        }

        for (int i = 0; i < n; ++i)
        {
            cout << q[i] << " ";
        }
        cout << endl;
    }

    return 0;
}

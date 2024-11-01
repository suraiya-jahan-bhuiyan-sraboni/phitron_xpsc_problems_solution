#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        long long n = s.size();
        vector<long long> upper, lower;

        for (long long i = 0; i < n; ++i)
        {
            if (s[i] == 'b')
            {
                s[i] = '\0';
                if (!lower.empty())
                {
                    s[lower.back()] = '\0';
                    lower.pop_back();
                }
                continue;
            }
            if (s[i] == 'B')
            {
                s[i] = '\0';
                if (!upper.empty())
                {
                    s[upper.back()] = '\0';
                    upper.pop_back();
                }
                continue;
            }
            if ('a' <= s[i] && s[i] <= 'z')
            {
                lower.push_back(i);
            }
            else
            {
                upper.push_back(i);
            }
        }

        for (char c : s)
        {
            if (c != '\0')
                cout << c;
        }
        cout << endl;
    }
    return 0;
}
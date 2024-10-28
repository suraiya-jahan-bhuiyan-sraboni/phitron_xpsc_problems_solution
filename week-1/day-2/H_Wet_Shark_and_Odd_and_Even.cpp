#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long sum = 0;
    int min_odd = 1000000001;
    for (int i = 0; i < n; i++)
    {
        int n;
        cin >> n;
        sum += n; 
        if (n % 2 != 0)
        {
            if (n < min_odd)
            {
                min_odd = n; 
            }
        }
    }
    if (sum % 2 == 0)
    {
        cout << sum << endl; 
    }
    else
    {
        cout << sum - min_odd << endl;
    }

    return 0;
}

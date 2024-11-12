#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        char ca = a.back();
        char cb = b.back();
        if (ca == cb)
        {
            if (a.size() == b.size())
            {
                cout << '=';
            }
            else if (ca == 'S')
            {
                if (a.size() < b.size())
                {
                    cout << '>';
                }
                else
                {
                    cout << '<';
                }
            }
            else
            {
                if (a.size() < b.size())
                {
                    cout << '<';
                }
                else
                {
                    cout << '>';
                }
            }
        }
        else
        {
            if (ca < cb)
            {
                cout << '>';
            }
            else
            {
                cout << '<';
            }
        }
        cout << '\n';
    }

    return 0;
}
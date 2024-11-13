#include <bits/stdc++.h>
using namespace std;

int n, m;
int maxSum;
vector<pair<int, int>> d = {{-1, -1}, {-1, 1}, {1, -1}, {1, 1}};

bool valid(int i, int j)
{
    return i >= 0 && i < n && j >= 0 && j < m;
}

int bfs(int si, int sj,vector<vector<int>> &grid)
{
    int sum = grid[si][sj];
    for (auto dir : d)
    {
        int ci = si + dir.first;
        int cj = sj + dir.second;
        while (valid(ci, cj))
        {
            sum += grid[ci][cj];
            ci += dir.first;
            cj += dir.second;
        }
    }
    return sum;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;

    while (t--)
    {
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> grid[i][j];
            }
        }

        maxSum = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int currentSum = bfs(i, j, grid);
                maxSum = max(maxSum, currentSum);
            }
        }

        cout << maxSum << endl;
    }

    return 0;
}

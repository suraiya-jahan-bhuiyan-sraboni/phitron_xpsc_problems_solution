#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int lenOfLongestSubarr(vector<int> &arr, int k)
    {
        unordered_map<int, int> map;
        int sum = 0, len = 0;

        for (int i = 0; i < arr.size(); i++)
        {
            sum += arr[i];

            if (sum == k)
                len = i + 1;

            if (map.find(sum - k) != map.end())
            {
                len = max(len, i - map[sum - k]);
            }

            if (map.find(sum) == map.end())
                map[sum] = i;
        }

        return len;
    }
};
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Your code here

    return 0;
}
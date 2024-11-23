#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int lenOfLongestSubarr(vector<int> &arr, int k)
    {
        unordered_map<int, int>
            prefixSumIndices;
        int currentSum = 0, longestLength = 0;

        for (int i = 0; i < arr.size(); i++)
        {
            currentSum += arr[i];

            if (currentSum == k)
                longestLength = i + 1;

            if (prefixSumIndices.find(currentSum - k) != prefixSumIndices.end())
            {
                longestLength =
                    max(longestLength, i - prefixSumIndices[currentSum - k]);
            }

            if (prefixSumIndices.find(currentSum) == prefixSumIndices.end())
                prefixSumIndices[currentSum] = i;
        }

        return longestLength;
    }
};
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Your code here

    return 0;
}
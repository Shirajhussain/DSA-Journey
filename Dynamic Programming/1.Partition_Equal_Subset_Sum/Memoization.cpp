class Solution {
public:
    bool topToDown(int index,
                   vector<int>& arr,
                   int target,
                   vector<vector<int>>& dp) {

        if (target == 0)
            return true;

        if (index >= arr.size() || target < 0)
            return false;

        if (dp[index][target] != -1)
            return dp[index][target];

        bool include =
            topToDown(index + 1, arr, target - arr[index], dp);

        bool exclude =
            topToDown(index + 1, arr, target, dp);

        return dp[index][target] = include || exclude;
    }

    bool equalPartition(vector<int>& arr) {

        int sum = 0;

        for (int x : arr)
            sum += x;

        if (sum % 2 != 0)
            return false;

        int target = sum / 2;

        vector<vector<int>> dp(
            arr.size(),
            vector<int>(target + 1, -1));

        return topToDown(0, arr, target, dp);
    }
};
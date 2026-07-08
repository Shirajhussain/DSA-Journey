class Solution {
public:
    bool solve(int index, vector<int>& arr, int target) {

        if (target == 0)
            return true;

        if (index >= arr.size() || target < 0)
            return false;

        bool include = solve(index + 1, arr, target - arr[index]);
        bool exclude = solve(index + 1, arr, target);

        return include || exclude;
    }

    bool equalPartition(vector<int>& arr) {

        int sum = 0;

        for (int x : arr)
            sum += x;

        if (sum % 2 != 0)
            return false;

        return solve(0, arr, sum / 2);
    }
};
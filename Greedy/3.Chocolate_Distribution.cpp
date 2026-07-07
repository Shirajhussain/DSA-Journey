```cpp
class Solution {
public:
    int findMinDiff(vector<int>& arr, int m) {

        sort(arr.begin(), arr.end());

        int i = 0;
        int j = m - 1;
        int ans = INT_MAX;

        while (j < arr.size()) {
            ans = min(ans, arr[j] - arr[i]);
            i++;
            j++;
        }

        return ans;
    }
};
```

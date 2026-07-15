class Solution {
public:
    void reverseInGroups(vector<int>& arr, int k) {

        int n = arr.size();

        for (int i = 0; i < n; i += k) {

            int start = i;
            int end = min(i + k, n);

            int left = start;
            int right = end - 1;

            while (left < right) {
                swap(arr[left], arr[right]);
                left++;
                right--;
            }
        }
    }
};
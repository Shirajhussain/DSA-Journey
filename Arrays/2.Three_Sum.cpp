# Complete Code

## Approach 1: Brute Force


class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        int n = nums.size();
        set<vector<int>> st;

        for (int i = 0; i < n - 2; i++) {

            for (int j = i + 1; j < n - 1; j++) {

                for (int k = j + 1; k < n; k++) {

                    if (nums[i] + nums[j] + nums[k] == 0) {
                        st.insert({nums[i], nums[j], nums[k]});
                    }
                }
            }
        }

        return vector<vector<int>>(st.begin(), st.end());
    }
};



## Approach 2: Hash Set

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        int n = nums.size();
        set<vector<int>> uniqueTriplets;

        for (int i = 0; i < n; i++) {

            unordered_set<int> st;

            for (int j = i + 1; j < n; j++) {

                int need = -(nums[i] + nums[j]);

                if (st.find(need) != st.end()) {
                    uniqueTriplets.insert({nums[i], need, nums[j]});
                }

                st.insert(nums[j]);
            }
        }

        return vector<vector<int>>(uniqueTriplets.begin(),
                                   uniqueTriplets.end());
    }
};


## Approach 3: Sorting + Two Pointers (Optimal)


class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());

        int n = nums.size();

        for (int i = 0; i < n - 2; i++) {

            // Skip duplicate first element
            if (i > 0 && nums[i] == nums[i - 1])
                continue;

            int left = i + 1;
            int right = n - 1;

            while (left < right) {

                int sum = nums[i] + nums[left] + nums[right];

                if (sum == 0) {

                    ans.push_back({nums[i], nums[left], nums[right]});

                    left++;
                    right--;

                    // Skip duplicate values
                    while (left < right && nums[left] == nums[left - 1])
                        left++;

                    while (left < right && nums[right] == nums[right + 1])
                        right--;
                }
                else if (sum < 0) {
                    left++;
                }
                else {
                    right--;
                }
            }
        }

        return ans;
    }
};


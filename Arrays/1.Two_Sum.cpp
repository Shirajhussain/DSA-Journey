class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int , int>mp;

        int i=0;
        int j=nums.size()-1;
        
        for(int i=0; i<nums.size(); i++){
            int diff = target - nums[i];

            if(mp.find(diff) != mp.end()){
                return {i,mp[diff]};
            }
            mp[nums[i]] = i;
        }
        return {};
    }
};
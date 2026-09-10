class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> sum;
        for(int i = 0; i < nums.size(); i++){
            int needed = target - nums[i];
            if(sum.count(needed)){
                return {sum[needed], i};
            }
            sum[nums[i]] = i;
        }
        return {};
    }
};
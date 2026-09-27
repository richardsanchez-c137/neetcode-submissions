class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> index;

        for(int i=0;i<nums.size();++i){
            index[nums[i]] = i;
        }

        for(int i=0; i<nums.size();++i){
            int difference = target - nums[i];
            if (index.count(difference) && index[difference] != i){
                return {i, index[difference]};
            }
        }
        return {};
    }
};

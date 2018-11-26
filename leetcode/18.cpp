class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        if(nums.size() < 4) return {};
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size() - 3; ++i){
            if(nums[i] + nums[i + 1] + nums[i + 2] + nums[i + 3] > target) break;
            if(nums[i] + nums[nums.size() - 3] + nums[nums.size() - 2] + nums[nums.size() - 1] < target) continue;
            for(int j = i + 1; j < nums.size() - 2; ++j){
                if(nums[i] + nums[j] + nums[j + 1] + nums[j + 2] > target) break;
                if(nums[i] + nums[j] + nums[nums.size() - 2] + nums[nums.size() - 1] < target) continue;
                int newTarget = target - nums[i] - nums[j];
                int left = j + 1, right = nums.size() - 1;
                while(left < right){
                    if(nums[left] + nums[right] == newTarget){
                        result.push_back(vector<int>{nums[i], nums[j], nums[left], nums[right]});
                        while(left < right && nums[left] == nums[++left]) continue;
                        while(left < right && nums[right] == nums[--right]) continue;
                    }else if(nums[left] + nums[right] < newTarget){
                        while(left < right && nums[left] == nums[++left]) continue;
                    }else if(nums[left] + nums[right] > newTarget){
                        while(left < right && nums[right] == nums[--right]) continue;
                    }
                }
                while(j < nums.size() - 2 && nums[j] == nums[j + 1]) ++j;
            }
            while(i < nums.size() - 3 && nums[i] == nums[i + 1]) ++i;
        }
        return result;
    }
};

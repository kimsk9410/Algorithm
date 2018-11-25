class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        if(nums.size() < 3) return {};
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size() - 2; ++i){
            int target = -nums[i], left = i + 1, right = nums.size() - 1;
            while(left < right){
                int sum = nums[left] + nums[right];
                if(target == sum){
                    result.push_back(vector<int> {nums[i], nums[left], nums[right]});
                    while(left < right && nums[left] == nums[++left]) continue;
                    while(left < right && nums[right] == nums[--right]) continue;
                }else if(target < sum){
                    --right;
                }else{
                    ++left;
                }
            }
            
            while(i + 1 < nums.size() - 2 && nums[i] == nums[i + 1]) ++i;
        }
        return result;
    }
};

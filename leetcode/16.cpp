class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int result = nums[0] + nums[1] + nums[2];
        for(int i = 0; i < nums.size() - 2; ++i){
            int left = i + 1, right = nums.size() - 1;
            while(left < right){
                int sum = nums[i] + nums[left] + nums[right];
                if(sum == target) return target;
                else if(sum > target){
                    while(left < right && nums[right] == nums[--right]) continue;
                }else{
                    while(left < right && nums[left] == nums[++left]) continue;
                }
                result = abs(result - target) > abs(sum - target) ? sum : result;
            }
            while(i < nums.size() - 2 && nums[i] == nums[i + 1]) ++i;
        }
        return result;
    }
};

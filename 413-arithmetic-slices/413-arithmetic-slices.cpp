class Solution {
public:
   int numberOfArithmeticSlices(vector<int>& nums) {
        if(nums.size()  < 3)
            return 0;
        int curr = 0,sum = 0;
        for(int i = 2; i< nums.size(); i++){
            if(nums[i] - nums[i-1] == nums[i-1] - nums[i-2]){
                curr += 1;
                sum += curr;
            }else
                curr = 0;
        }
        return sum;
    }
};
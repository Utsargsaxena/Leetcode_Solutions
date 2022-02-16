class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        int u=upper_bound(nums.begin(),nums.end(),target)-nums.begin();
        
        int n=nums.size();
        if(l>u-1) return {-1,-1};

        return {1*l,1*u-1};
    }
};
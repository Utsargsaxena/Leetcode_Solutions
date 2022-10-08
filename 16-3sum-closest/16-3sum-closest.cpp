class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        
        int mindiff=INT_MAX;
        int result=0;
        for(int i=0;i<nums.size();i++){
            int j=i+1;
            int k=nums.size()-1;
            while(j<k){
                int summ = nums[i]+nums[j]+nums[k];
                if(abs(target-summ)<mindiff){
                    mindiff=abs(target-summ);
                    result=summ;
                }
                if(summ>target)
                    k--;
                else
                    j++;
                
                if(target==summ)
                    return result;
            }
        }
            return result;
    }
};
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
         int n = nums.size();
        vector<int> output(n,1);
        
        int mult=1;
        int flag=0;
        
        for(int i=0;i<n;i++)
        {
        if(nums[i]==0)
        flag++;
        else
        mult=mult*nums[i];
        }

        for(int i=0;i<n;i++)
        {
        if (flag > 1) output[i] = 0;
            
        else if (flag == 0) output[i] = (mult / nums[i]);
            
        else if (flag == 1 && nums[i] != 0) output[i] = 0;
            
          else   output[i] = mult;    
        }
        
return output;
}
    
    };
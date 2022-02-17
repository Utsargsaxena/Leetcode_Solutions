class Solution {
public:

    void helper(int index, int target, vector<int>&candidates, vector<int>&ds, vector<vector<int>>&ans){
        //base case
        if(index == candidates.size()){
            if(target == 0)
            {
                ans.push_back(ds);
            }
             return;
        }
       
        //pick up the element
        if(candidates[index] <= target){
            //then only we can pick that element 
            ds.push_back(candidates[index]);
            helper(index, target- candidates[index], candidates, ds, ans);
            ds.pop_back();
        }
        
        //when we are not picking up the element
        helper(index+1, target, candidates, ds, ans);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target){
        // to store final ans (all the possible combinations)
        vector<vector<int>>ans;
        vector<int>ds;
        helper(0, target,candidates,  ds, ans);
        return ans; 
    }
};
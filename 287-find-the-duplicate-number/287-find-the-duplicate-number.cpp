class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> set;
        
        for(int a:nums)
        {
            if(set.count(a)>0)
            {
                return a;
            }
            set.insert(a);
        }
        return -1;
    }
};
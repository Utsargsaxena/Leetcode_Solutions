class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        int n = nums.size();
        unordered_set<int>s;
        
        for(int x : nums)
            s.insert(x);
        
        int answer=1;
        for(auto x:nums){
            int parent=x-1;
            
        
            if(s.find(parent)==s.end()){
            int next = x+1;
            int countt=1;
            
        while(s.find(next)!=s.end()){
            next++;
            countt++;
        }
            if(countt>answer)
                answer=countt;
        }
        }
    return answer;
    }
    };
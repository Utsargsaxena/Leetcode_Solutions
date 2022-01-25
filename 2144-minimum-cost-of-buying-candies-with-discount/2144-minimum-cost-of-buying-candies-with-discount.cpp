class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int n = cost.size(), sol=0;
        sort(cost.begin(), cost.end(), greater<int>());
        for(int i=0;i<n;i++){
            if((i+1)%3!=0)
            sol=sol+cost[i];
        }
        return sol;
    }
};
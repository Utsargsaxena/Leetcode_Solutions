class Solution {
public:
    int minimumCost(vector<int>& A) {
        sort(A.begin(), A.end());
        int res = 0, n = A.size();
        for (int i = 0; i < A.size(); ++i)
            if (i % 3 != n % 3)
                res += A[i];
        return res;
    }
};
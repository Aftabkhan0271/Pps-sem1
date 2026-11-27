class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        
        // Base case: the first running sum is the number itself
        ans[0] = nums[0];
        
        for (int i = 1; i < n; ++i) {
            ans[i] = ans[i - 1] + nums[i];
        }
        
        return ans;
    }
};
class Solution {
public:
    int dp[101];
    int knapsack(vector<int>&nums,int n)
    {
        if(n < 0)
            return 0;
        if(dp[n]!=-1)
            return dp[n];
        return dp[n] = max(knapsack(nums,n-2)+nums[n],knapsack(nums,n-1));
    }
    int rob(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        int n = nums.size();
        int ans = knapsack(nums,n-1);
        return ans;      
    }
};
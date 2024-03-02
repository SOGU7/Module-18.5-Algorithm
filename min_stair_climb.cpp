class Solution {
public:
    int dp[10005];
    int cost_count(vector<int>&cost,int n)
    {
        if(n < 0)
            return 0;
        if(n == 0 || n == 1)
            return cost[n];
        if(dp[n]!=-1)
            return dp[n];
        int op1 = cost[n]+cost_count(cost,n-2);
        int op2 = cost[n]+ cost_count(cost,n-1);
        return dp[n] = min(op1,op2);
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        memset(dp,-1,sizeof(dp));
        return min(cost_count(cost,n-1),cost_count(cost,n-2));        
        
    }
};
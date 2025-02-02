//Leetcode: https://leetcode.com/problems/minimum-falling-path-sum/

//MY Code: 

class Solution {
public:
    int solve(vector<vector<int>>& matrix, int row, int col, int n, int m, vector<vector<int>>& dp){
        if(row==n){
            return 0;
        }
        if(col<0 || col>=m){
            return INT_MAX;
        }
        if (dp[row][col] != INT_MAX) return dp[row][col];
        int ele= matrix[row][col];
        int a= solve(matrix, row+1, col-1, n,m, dp);
        int b= solve(matrix, row+1, col, n, m, dp);
        int c= solve(matrix, row+1, col+1, n, m, dp);
        return dp[row][col]= ele+min(a, min(b,c));
    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int row=0;
        int col=0;
        int n= matrix.size();
        int m= matrix[0].size();
        int mini = INT_MAX;
        vector<vector<int>>dp(n, vector<int>(m,INT_MAX));
        for (int col = 0; col < m; col++) {
            mini = min(mini, solve(matrix, 0, col, n, m, dp));
        }
        return mini;
    }
};

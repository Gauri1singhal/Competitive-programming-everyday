//My code
class Solution {
public:
    int solve(vector<int>& nums,int s, int n){
        int prev2= 0;
        int prev1= (s<n)? nums[s]:0;
        int curr=0;
        for(int i=s+1; i<=n; i++){
            int temp=0;
            if(i-2>=s)
                temp= prev2;
            int inc= temp+nums[i];
            int exc= prev1;
            curr= max(inc,exc);
            prev2= prev1;
            prev1= curr;
        }
        return prev1;
    }
    int rob(vector<int>& nums) {
        int n= nums.size();
        if(n==1)return nums[0];
        if(n==2)return max(nums[0], nums[1]);
        int ans1= solve(nums, 1,n-1);
        int ans2= solve(nums, 0, n-2);
        return max(ans1, ans2);
    }
};

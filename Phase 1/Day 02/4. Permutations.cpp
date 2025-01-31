// LeetCode https://leetcode.com/problems/permutations/description/ 
//My Code

class Solution {
public:
    // void solve(vector<int>& nums,vector<vector<int>>& ans, vector<int>&temp, unordered_set<int>&st){
    //     if(temp.size()==nums.size()){
    //         ans.push_back(temp);
    //         return;
    //     }
    //     for(int i=0; i<nums.size(); i++){
    //         int ele= nums[i];
    //         if(st.find(ele)==st.end()){
    //             st.insert(ele);
    //             temp.push_back(ele);
    //             solve(nums, ans, temp, st);
    //             st.erase(ele);
    //             temp.pop_back();
    //         }
    //     }
    // }

    vector<vector<int>>ans;
    void solve(vector<int>& nums, int i){
        if(i>=nums.size()){
            ans.push_back(nums);
            return;
        }
        
        for(int j=i; j<nums.size(); j++){
            swap(nums[i], nums[j]);
            solve(nums, i+1);
            swap(nums[i], nums[j]);
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        // vector<vector<int>>ans;
        // vector<int>temp;
        // unordered_set<int>st;
        // solve(nums, ans, temp, st);
        // return ans;

        solve(nums, 0);
        return ans;
    }
};

//Leetcode- https://leetcode.com/problems/two-sum/description/
//my code

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // vector<int>ans;
        // for(int i=0; i<nums.size(); i++){
        //     for(int j=i+1; j<nums.size(); j++){
        //         if(nums[i]+nums[j]==target){
        //             ans.push_back(i);
        //             ans.push_back(j);
        //         }
        //     }
        // }
        // return ans;
        
        unordered_map<int, int>mp;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]=i;
        }
        for(int i=0; i<nums.size(); i++){
            int tar= target-nums[i];
            if(mp.find(tar)!=mp.end() && mp[tar]!=i){
                return{i, mp[tar]};
            }
        }
        return {-1};
    }
};

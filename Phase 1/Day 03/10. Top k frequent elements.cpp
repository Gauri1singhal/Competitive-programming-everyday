// LeetCode: https://leetcode.com/problems/top-k-frequent-elements/

// My Code:

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int>mp;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        priority_queue<pair<int, int>>q;
        for(auto& temp: mp){
            q.push({temp.second, temp.first});
        }
        vector<int>ans;
        while(k--){
            ans.push_back(q.top().second);
            q.pop();
        }
        return ans;
    }
};

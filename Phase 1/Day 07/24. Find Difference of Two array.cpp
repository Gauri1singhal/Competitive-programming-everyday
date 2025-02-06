//Leetcode: https://leetcode.com/problems/find-the-difference-of-two-arrays/?envType=study-plan-v2&envId=leetcode-75
//My Code: 

class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s1(nums1.begin(), nums1.end());
        unordered_set<int> s2(nums2.begin(), nums2.end());
        vector<int> res1, res2;
        for (int num : s1) {
            if (s2.find(num) == s2.end()) {
                res1.push_back(num);
            }
        }
        for (int num : s2) {
            if (s1.find(num) == s1.end()) {
                res2.push_back(num);
            }
        }
        return {res1, res2};
    }
};

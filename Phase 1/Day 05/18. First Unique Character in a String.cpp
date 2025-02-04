//Leetcode: https://leetcode.com/problems/first-unique-character-in-a-string/submissions/1530597949/
//My Code:

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int>mp;
        for(int i=0; i<s.length(); i++){
            mp[s[i]]++;
        }
        for(int i=0; i<s.length(); i++){
            char ch= s[i];
            if(mp[ch]==1){
                return i;
            }
        }
        return -1;
    }
};

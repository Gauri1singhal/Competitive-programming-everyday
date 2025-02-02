//Leetcode: https://leetcode.com/problems/jewels-and-stones/
//My Code: 

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char, int>mp;
        for(int i=0; i<jewels.size(); i++){
            char ch=jewels[i];
            mp[ch]++;
        }
        int count=0;
        for(int i=0; i<stones.size(); i++){
            char ch=stones[i];
            if(mp[ch]!=0){
                count++;
            }
        }
        return count;
    }
};

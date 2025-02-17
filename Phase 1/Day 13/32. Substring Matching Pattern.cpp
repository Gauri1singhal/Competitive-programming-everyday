//Leetcode: https://leetcode.com/problems/substring-matching-pattern/description/
//My Code:

class Solution {
public:
    bool hasMatch(string s, string p) {
        int idx=0;
        for(int i=0; i<p.length(); i++){
            if(p[i]=='*'){
                idx=i;
                break;
            }
        }
        string left = p.substr(0, idx);
        string right = p.substr(idx + 1, p.size());

        int i = s.find(left);
        int j = s.rfind(right);

        return i != -1 && j != -1 && i + left.size() <= j;
    }
};

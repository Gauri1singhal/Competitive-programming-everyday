//Leetcode: https://leetcode.com/problems/number-complement/
//My Code: 

class Solution {
public:
    int findComplement(int num) {
    //    return num^ (2*( (1<<int(log2(num)) ) -1) | 1);
    int ans=0;
    int i=0;
    if(num==0)
        ans=1;
    else{
        while (num != 0){
            int lastBit = !(num & 1);
            ans = ans + lastBit * pow(2, i);
            num = num >> 1;
            i++;
        }
    }
    return ans;
    }
};

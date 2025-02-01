//Leetcode- https://leetcode.com/problems/product-of-array-except-self/description/
//My code

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
       int sum=1;
       int count0=0;
       for(int i=0; i<nums.size(); i++){
        if(nums[i]==0){
            count0++;
        }
        else{
            sum*= nums[i];
        }
       }
       for(int i=0; i<nums.size(); i++){
        if(count0>1){
            nums[i]=0;
        }
        if(count0==1){
            if(nums[i]==0){
                nums[i]= sum;
            }
            else nums[i]=0;
        }
        if(count0==0){
            int val=sum/nums[i];
            nums[i]= val;
        }
       }
       return nums;
    }
};

//gfg: https://www.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1
//My Code:

Class Solution{
public:
    vector<int> subarraySum(vector<int> &arr, int target) {
       int l=0; int r=0;
       int sum=arr[0];
       while(r<arr.size()){
           if(sum==target){
               return{l+1, r+1};
           }
           else if(sum>target){
               sum-=arr[l];
               l++;
           }
           else{
               r++;
               sum+=arr[r];
           }
       }
       return {-1};
    }
};

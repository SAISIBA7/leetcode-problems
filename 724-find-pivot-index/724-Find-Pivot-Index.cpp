class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int i = 0;
        int sum1=0,sum2=0,tsum=0;
        while(i<nums.size()){
            tsum = tsum + nums[i];
            i++;
        }
        i=0;
        while(i<nums.size()){
         sum2 = tsum - sum1 - nums[i];
         if(sum2 == sum1 ){
            return i;
         }
         sum1 += nums[i];
        i++;
        }
        return -1;
    }
};
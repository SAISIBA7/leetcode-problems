class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int b= nums.size();
        vector<int>result(b,0);
        int Pindex=0;
        int Negindex=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                result[Pindex]=nums[i];
                Pindex = Pindex+2;
            }
            else{
                result[Negindex] = nums[i];
                Negindex = Negindex +2;
            }
        }
        return result;
    }
};
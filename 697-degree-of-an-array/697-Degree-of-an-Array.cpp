class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int,int>freq;
        int degree=0;
        for(int x : nums){
        freq[x]++;
        }
        for(auto x: freq){
            degree=max(degree,x.second);
        }
        unordered_map<int,int>first;
        unordered_map<int,int>last;
        for(int i =0;i<nums.size();i++){
            if(first.find(nums[i])==first.end()){
                first[nums[i]]=i;
            }
            last[nums[i]]=i;
        }
        int a = INT_MAX;
        for(auto x: freq){
            if(x.second==degree){
            a= min(a,last[x.first] - first[x.first] + 1);
            }
        }
        return a;
    }
};
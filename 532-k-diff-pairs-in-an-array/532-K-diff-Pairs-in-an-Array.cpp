class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int count=0;
        unordered_set<int>s;
        if(k==0){
            unordered_map<int,int>mp;
            for(int i=0;i<nums.size();i++){
                mp[nums[i]]++;
            }
            for(auto x:mp){
                if(x.second>=2){
                    count++;
                }
            }
            return count;
        }
        else{
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        for( int x : s){
            if(s.find(x+k)!=s.end() ){
                count++;
            }
        }
        return count;}
    }
};
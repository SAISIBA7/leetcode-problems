class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        long long i = 0, j = 0, length = 0;
        long long n = nums.size();
        while (i < n && j < n) {
            if (nums[j] <= nums[i] * 1LL * k) {
                length = max(length, j - i + 1);
                j++;
            } else {
                i++;
                if (i > j) {
                    j = i;
                }
            }
        }
        return n - length;
    }
};
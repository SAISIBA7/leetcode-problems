class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        sort(nums.begin(), nums.end());

        int i = 0, j = nums.size() - 1;
        long long countUpper = 0, countLower = 0;

        while (i < j) {
            if (nums[i] + nums[j] <= upper) {
                countUpper += j - i;
                i++;
            } else {
                j--;
            }
        }

        i = 0;
        j = nums.size() - 1;

        while (i < j) {
            if (nums[i] + nums[j] < lower) {
                countLower += j - i;
                i++;
            } else {
                j--;
            }
        }

        return countUpper - countLower;
    }
};
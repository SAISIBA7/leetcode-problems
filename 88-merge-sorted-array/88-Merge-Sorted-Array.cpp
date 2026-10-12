class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = 0, j = 0, x = 0;
        vector<int> z(m + n);

        while (i < m && j < n) {
            if (nums1[i] <= nums2[j]) {
                z[x++] = nums1[i++];
            } else {
                z[x++] = nums2[j++];
            }
        }

        while (i < m) {
            z[x++] = nums1[i++];
        }

        while (j < n) {
            z[x++] = nums2[j++];
        }

        nums1 = z;
    }
};
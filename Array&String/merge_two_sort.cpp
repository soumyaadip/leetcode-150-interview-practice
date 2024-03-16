class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       int j = 0; // Initialize an integer variable 'j' to 0.
        for (int i = m; i < nums1.size(); i++) { // Iterate over nums1 starting from index 'm'.
            nums1[i] = nums2[j]; // Assign the value of nums2[j] to the i-th element of nums1.
            j++; // Increment 'j' to move to the next element in nums2.
        }

        sort(nums1.begin(), nums1.end()); // Sort nums1 in non-decreasing order.
    }
};

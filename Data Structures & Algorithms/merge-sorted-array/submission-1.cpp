class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> arr(m + n, 0);
        int i = 0, j = 0,k = 0;

        while(i < m && j < n && m != 0) {
            if(nums1[i] < nums2[j]) {
                arr[k] = nums1[i++];
            }
            else {
                arr[k] = nums2[j++];
            }
            k++;
        }
        while(i < m && m != 0) {

            arr[k++] = nums1[i++];
        }
        while(j < n) {
            arr[k++] = nums2[j++];
        }
        nums1 = arr;
    }
};
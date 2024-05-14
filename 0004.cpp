// 4. Median of Two Sorted Arrays
// O((n1 + n2) * log(n1 + n2)), 103ms
// definitely not proud of this one today
// this was written on oct 29, 2022 according to leetcode

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        std::vector<float> merged;
        merged.insert(merged.end(), nums1.begin(), nums1.end());
        merged.insert(merged.end(), nums2.begin(), nums2.end());
        std::sort(merged.begin(), merged.end());
        
        float solution;
        if (merged.size() % 2 == 0) {
            solution = (merged[floor(merged.size()/2)] + merged[floor(merged.size()/2-1)]) / 2;
        }
        
        else {
            solution = merged[merged.size()/2];
        }
        
        return solution;
    }
};
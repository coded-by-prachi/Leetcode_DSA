class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i = 0;
        int j = 0;
        int m = nums1.size();
        int n = nums2.size();


        vector<int> result;
        
        while(i <m && j<n){
            if(nums1[i] < nums2[j]){
                result.push_back(nums1[i]);
                i++;
            }
            else{
                result.push_back(nums2[j]);
                j++;
            }
        }

        while(i < m){
            result.push_back(nums1[i]);
            i++;
        }
        while(j < n){
          result.push_back(nums2[j]);
                j++;
            
        }
        int r = result.size();
            double median;
            if(r % 2 == 0){
              return  median = (result[r/2] + result[(r/2)-1])/2.0;
            }
            else{
                return median = result[r/2];
            }

    }
};
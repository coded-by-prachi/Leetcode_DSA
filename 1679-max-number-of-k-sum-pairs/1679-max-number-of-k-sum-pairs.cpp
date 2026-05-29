class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int i = 0;
        int j = nums.size()-1;
        int count = 0;

        while(i < j){
            int sum = nums[i] + nums[j];
            if(sum == k){
                count++;
                j--;
                i++;
            }
            // nums.erase(nums[i]);
            // nums.erase(nums[j]);
            
            else if(sum < k){
                i++;
            }
            else{
                j--;
            }
        }
        return count;
    }
};
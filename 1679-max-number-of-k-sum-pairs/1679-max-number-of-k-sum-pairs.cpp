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
            // nums.erase(nums[j]);You do NOT need to erase elements., i++ means left element already used, j-- means right element already used ,So pointers automatically skip used elements.
            
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
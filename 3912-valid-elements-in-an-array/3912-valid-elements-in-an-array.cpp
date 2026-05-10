class Solution {
public:
    vector<int> findValidElements(vector<int>& nums) {
        int n = nums.size();
        int left = INT_MIN;
        int right = INT_MIN;
        vector<bool>valid(n,false);
        for(int i = 0; i < n; i++){
            if(nums[i] >left){
                valid[i] = true;
                left = nums[i];
                // left++;
            }
        }
        for(int i= n-1; i>= 0; i--){
            if(nums[i] > right ){
                valid[i] = true;
                right = nums[i];
                // right--;
            }
        }
        
        vector<int>arr;
        for(int i = 0; i < n; i++){
            if(valid[i]){
            arr.push_back(nums[i]);
            }
        }
        return arr;
    }
};
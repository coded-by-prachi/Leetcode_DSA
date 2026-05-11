class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n;
        vector<int>arr(nums.size(), 1);
        int product = 1;
        // int s = 0;
        // int e = nums.size() -1; 
        for(int i = 0; i < nums.size(); i++){
            arr[i] *= product;
            product *= nums[i]; 
        }
        int product1 = 1;
        for(int i = nums.size()-1; i>=0; i--){
            arr[i] *= product1;
            product1 *= nums[i];
        }
        // for(int i = 0; i < arr.size(); i++){
        //     arr.push_back(product * product1);
        // }

        return arr;
        


        
    }
};
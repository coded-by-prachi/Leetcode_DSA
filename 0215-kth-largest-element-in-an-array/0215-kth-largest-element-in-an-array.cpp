class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>>minh;

        for(int i = 0; i < nums.size(); i++){
            minh.push(nums[i]);
            if(minh.size() > k){
                minh.pop();
            }
        }
        // vector<int>arr;
        // arr.push_back(minh.top());
        return minh.top();
        
    }
};
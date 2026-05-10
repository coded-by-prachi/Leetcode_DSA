class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int, int>freq;
        vector<int>arr;
        for(int x: nums){
            freq[x]++;
        }
        
        for(auto x: freq){
            if(x.second >1){
            arr.push_back(x.first);
            }
        }
        return arr;
    }
};
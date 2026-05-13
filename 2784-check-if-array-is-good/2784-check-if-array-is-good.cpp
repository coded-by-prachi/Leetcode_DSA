class Solution {
public:
    bool isGood(vector<int>& nums) {
        int m = nums.size();
        int n = m-1;
        unordered_map<int, int>mp;
        for(int it:nums){
            mp[it]++;
        }

        int maxi = *max_element(nums.begin(), nums.end());
        if(maxi != n){
            return false;
        }

        for(int i = 1; i < n; i++){
            if(mp[i] != 1){
                return false;
            }
        }

        for(auto it:mp){
            if(mp[n] == 2){
                return true;
            }
        }
        return false;
    }
};
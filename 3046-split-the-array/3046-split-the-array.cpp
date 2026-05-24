class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        unordered_map<int, int>mp;
        for(int num:nums){
            mp[num]++;
        }  
        for(auto num:mp){
            if(num.second > 2){
                return false;
            }
        }
        return true;

      

       
        
    }
};
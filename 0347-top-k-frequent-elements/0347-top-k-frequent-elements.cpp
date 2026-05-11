class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int>mp;
        for(int it: nums){
            mp[it]++;
        }
       
        priority_queue<pair<int, int>,vector<pair<int, int>>,greater<pair<int, int>>>minh;
        for(auto it = mp.begin(); it!= mp.end(); it++){
            minh.push({it->second, it->first});
            if(minh.size() > k){
            minh.pop();
            }
        }
         vector<int>arr;
         while(minh.size() > 0){
            arr.push_back(minh.top().second);
            minh.pop();
        }
        return arr;

    }
};
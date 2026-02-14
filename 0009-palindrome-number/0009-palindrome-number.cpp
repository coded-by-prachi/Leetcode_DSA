using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        vector<int>arr;
        string s = to_string(x);
        for(char c : s){
            arr.push_back(c - '0');
        }
        int start = 0;
        int end = arr.size() -1;
        while(start < end){
        if(arr[start] != arr[end]){
            return false;
        }
        start++;
        end--;
        }
        return true;

    }
};
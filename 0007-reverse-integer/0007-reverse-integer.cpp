class Solution {
public:
    int reverse(int x) {
         long long sum = 0;
        int original = x;
        while(original != 0){
            int ans = original % 10;
            sum = sum*10 + ans;

            if(sum > INT_MAX || sum < INT_MIN){
                return 0;
            }
            original/= 10;
        }
        return sum;
        
    }
};
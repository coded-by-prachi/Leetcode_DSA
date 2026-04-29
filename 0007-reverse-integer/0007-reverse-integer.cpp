class Solution {
public:
    int reverse(int x) {
        long long sum = 0;
        while(x != 0){
            int ans = x % 10;
            sum = sum * 10 + ans;
            if(sum > INT_MAX || sum< INT_MIN){
                return 0;
            }
            x = x/ 10;
        }
        return sum;
    }
};
class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend == INT_MIN && divisor == -1)
             return INT_MAX;
        //  if(divisor == 1 && dividend == INT_MIN ){
        //     return  INT_MIN;
        // }
        // if(divisor == -1 && dividend == INT_MAX  ){
        //     return INT_MIN;
        // }
        long long count = 0;
        long long dv = abs((long long) dividend);
        long long ds = abs((long long) divisor);
        // long long i =0;
        while(dv >= ds){
                    long long i =0;

            while(dv >= ds<<(i+1)){
                i++;
            }
            dv -= (ds<<i);
            count += 1<<i;
            // dv -= ds;
            // count++;
        }
        if((dividend > 0 && divisor <0) || (dividend < 0 && divisor > 0)){
            return  -count;
        }
       
        return count;
        
    }
};
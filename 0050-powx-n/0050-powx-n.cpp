class Solution {
public:
    double myPow(double x, int n) {
        double result;
        if(n > 0){
             result = pow(x, n);
        }
        else if(n<0 && n>0){
            result = 1/pow(x, n);
        }
        return result;
    }
};
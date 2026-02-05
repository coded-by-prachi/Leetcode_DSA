public class Solution {
    public bool IsPalindrome(int x) {

            int[] arr = x
            .ToString()
            .Select(c => c - '0')
            .ToArray();

            int s = 0;
            int e = arr.Length - 1;
            while(s < e){
                if(arr[s]!= arr[e]){
                    return false;
                }
                s++;
                e--;
            }
            return true;

    }
}
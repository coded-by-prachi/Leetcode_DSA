public class Solution {
    public int FindDuplicate(int[] nums) {
        int[] freq = new int[nums.Length];
        foreach(int num in nums){
            if(freq[num] == 1){
                return num;
            }
            freq[num]++;
        }
        return -1;
    }
}
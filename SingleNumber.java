//We will be given an array and we have to find the single number 
//except which all other numbers are repeated twice -leetcode easy

class Solution {
    public int singleNumber(int[] nums) {
        int result = 0;
        for(int i = 0;i<nums.length;i++){
            result = result ^ nums[i];
        }
        return result;
    }
}


public class SingleNumber {
    public static void main(String[] args) {
        Solution s = new Solution();
        int a [] = {4,1,3,4,3};
        System.out.println(s.singleNumber(a));
    }
}

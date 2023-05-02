import java.util.*;

//move all the zeros in the array to last without changing the actual order of other elements
// leetcode - interview array question

class Solution {
    public void moveZeroes(int[] nums) {
        int cnt= 0;
        for(int i = 0;i<nums.length;i++){
            if(nums[i] !=0){
                nums[cnt] = nums[i];
                ++cnt;
            }
        }
        for(int i = cnt; i < nums.length; i++)
            nums[i]=0;
        
    }
}

public class MoveZero {
    public static void main(String[] args) {
        Solution s = new Solution();
        int a[] = {0,1,0,3,12};
        s.moveZeroes(a);
        for(int i = 0; i<a.length;i++){
            System.out.print(a[i] + " ");
        }
    }
}

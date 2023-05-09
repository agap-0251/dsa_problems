import java.util.*;
//Leetcode array interview question
// Return true if array consists atleast one repeated element
// else return false


class Solution {
    public boolean containsDuplicate(int[] nums) {
        var s = new HashSet<Integer>();
        for(int ele : nums) {
            if(s.contains(ele))
                return true;
            s.add(ele);
        }
        return false;
    }
}


public class ContainsDuplicate {
    public static void main(String[] args) {
        Solution s = new Solution();
        int arr[] = {1,2,3,4,5,2};
        System.out.println(s.containsDuplicate(arr));
    }   
}

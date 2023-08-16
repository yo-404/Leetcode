//2317. Maximum XOR After Operations

// using |= operator
// this is equivalent of adding the XOR values 
// 
class Solution {
    public int maximumXOR(int[] nums) {
        int result=0;
        for(int i=0;i<nums.length;i++)
        {
            result|=nums[i];
        }
        return result;
    }
}


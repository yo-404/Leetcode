class Solution {
    public int maxArea(int[] height) {
        int left=0;
        int right=height.length-1;
        int maxi=0;
        while(left<right){
            int lh= height[left];
            int rh=height[right];
            int min =Math.min(lh,rh);
            maxi=Math.max(maxi,min*(right-left));
            if(lh<rh) left++;
            else right--;
        }
        return maxi;
    }
}

// O(n) time complexity

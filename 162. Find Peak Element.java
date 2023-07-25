162. Find Peak Element

//brute force approach

class Solution {
    public int findPeakElement(int[] nums) {
        int temp=0;
          for(int i=0;i<nums.length-1;i++){
            if(nums[i]>nums[i+1]){
                temp=i;
                break;
            }
            else{
                temp=i+1;
            }
        }
        return temp;
    }
}

//using optimal approach

//optimal approach with log(n) time complexity 
//using binary search algo

class Solution {
    public int findPeakElement(int[] nums) {
        int low=0;
        int high=nums.length-1;
        while(low<high){
            int mid=low+(high-low)/2;
            if(nums[mid]>nums[mid+1]){
                high=mid;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
}
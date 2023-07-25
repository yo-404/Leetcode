class Solution {
    public int peakIndexInMountainArray(int[] arr) {
        // using binary search as the result needs to be in log(n) time complexity

        int low=0;
        int high=arr.length-1;

        while(low<high){
            int mid=(low+(high-low)/2);
            if(arr[mid]>arr[mid+1]){
                high=mid;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
}


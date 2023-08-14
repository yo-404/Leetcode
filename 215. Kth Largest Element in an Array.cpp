//using maxHeap /Priority Queue

class Solution {
    public int findKthLargest(int[] nums, int k) {
        PriorityQueue<Integer> maxHeap = new PriorityQueue<>(Comparator.reverseOrder());
        
        for(int num :nums){
            maxHeap.offer(num);
        }

        for(int i=0;i<k-1;i++){
            maxHeap.poll();
        }

        return maxHeap.peek();
        
    }
}


// pushing all the values in maxHeap
//removing k-1 values from maxHeap
// peeking the top value after removing k-1 values

-------------------

// naive approach

class Solution {
    public int findKthLargest(int[] nums, int k) {
        Arrays.sort(nums);
        return nums[nums.length-k];
    }
}
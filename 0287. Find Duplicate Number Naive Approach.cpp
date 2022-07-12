//bruteforce approach 
//sorting the array and then making checking if i = i+1


class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int size=nums.size()-1;
        int val=0;
        sort(nums.begin(),nums.end());
        int i=0;
        while(i<size){
            if(nums[i]!=nums[i+1])
                i++;
            else
               
               break;
        }
         val=nums[i];
        return val;
    }
};

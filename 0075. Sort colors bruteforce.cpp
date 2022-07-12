//using naive approach 
//counter approach for each color
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int size = nums.size();
       int cntr=0,cntw=0,cntb=0;
        for(int i=0;i<size;i++){
            if(nums[i]==0)
                cntr++;
            else if(nums[i]==1)
                cntw++;
            else
                cntb++;
        }
        
        for(int i=0;i<cntr;i++){
            nums[i]=0;
        }
        for(int i=cntr;i<cntw+cntr;i++){
            nums[i]=1;
        }
        for(int i=cntw+cntr;i<cntb+cntw+cntr;i++){
            nums[i]=2;
        }
       
    }
};
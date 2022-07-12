//using the bruteforce approach
//sorting the given array and using counter to compare if the number matches counter or not
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=cnt){
                break;
            }
            else{
                cnt++;
            }
        }return cnt;
    }
};
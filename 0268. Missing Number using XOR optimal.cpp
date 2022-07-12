//268. Missing Number
//solution using xor property
//268. Missing Number


class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=nums.size();
        int cnt=0;
        //for each loop
         for(auto x:nums){
            sum ^=x;
             sum ^=cnt;
             cnt++;
        }
        return sum;
    }
};
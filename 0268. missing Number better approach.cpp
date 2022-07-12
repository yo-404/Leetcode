//solution by using the property that sum of consecutive digits is equal to (n(n+1)/2)
//subtracting the value of consective digits with the addition of given array in the following question


class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int res =0;
        int sum=0;
        int total = nums.size()*(nums.size()+1)/2;
        for(auto x:nums){
            sum+=x;
        }
        res=total-sum;
        return res;
    }
};
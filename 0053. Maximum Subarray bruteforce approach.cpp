//works but time limit will be exceeded
//using bruteforce approach ..quadratic tc on^2


class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=size(nums),ans=INT_MIN;
        for(int i=0;i<n;i++){
            for(int j=i,sum=0;j<n;j++){
                sum+=nums[j];
                ans=max(ans,sum);
            }
        }
        return ans;
    }
};
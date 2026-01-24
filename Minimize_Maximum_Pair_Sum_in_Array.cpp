class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int n=nums.size();
        int ans=INT_MIN;
        sort(nums.begin(),nums.end());
        //2,3,3,5
        int start=0;
        int end=n-1;
        while(start<=end)
        {
            ans=max(ans,nums[start]+nums[end]);
            start++;
            end--;
        }
        
        return ans;
    }
};
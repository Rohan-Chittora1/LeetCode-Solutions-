1class Solution {
2public:
3    vector<int> twoSum(vector<int>& nums, int target) {
4        int n=nums.size();
5        
6        for(int i=0;i<n;i++)
7        {
8            
9            for(int j=i+1;j<n;j++)
10            {
11                if(nums[i]+nums[j]==target)
12                {
13                   
14                   return {i,j};
15                    // a=i;
16                    // b=j;
17                    // while(i!=j){
18                    // b=j;
19                    // }
20                    //LeetCode-Solutions
21
22                
23
24                }
25            }
26        }
27        return {};
28    
29        
30        
31    }
32};
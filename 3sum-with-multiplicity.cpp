class Solution {
public:
   int threeSumMulti(vector<int>& arr, int target) {
       unordered_map<int, int> freq;
       int MOD = 1e9 + 7;
       long long ans = 0;
       int n = arr.size();
       for(int i=0; i<n; i++){
           ans+= freq[target - arr[i]];
           
           for(int j=0; j<i; j++){
               freq[arr[i] + arr[j]]++;
           }
       }
       
       return ans % MOD;
   }
};
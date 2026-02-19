//Solution 01:
class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
        int n = arr.size(), mod = 1e9+7, count = 0;
        unordered_map<int, int> mp;
        
        for(int i=0; i<n; i++){
            count = (count + mp[target - arr[i]]) % mod;
            
            for(int j=0; j<i; j++){
                mp[arr[i] + arr[j]]++;
            }
        }
        
        return count;
    }
};

//Solution 02:
class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
        int n = arr.size();
        int start, end, ans = 0, mod = 1e9+7;
        sort(arr.begin(), arr.end());
        
        for(int i=0; i<n-2; i++){
            int temp = target - arr[i];
            start = i+1; 
            end = n-1;
            
            while(start < end){
                if(arr[start] + arr[end] == temp){
                    long long sc = 1, ec = 1;
                    while(start < end && arr[start] == arr[start+1]){
                        start++;
                        sc++;
                    }
                    while(start < end && arr[end] == arr[end-1]){
                        end--;
                        ec++;
                    }
                    if(start == end){
                        long long temp = (sc*(sc-1))/2; //nC2
                        ans = (ans + temp) % mod;
                    }
                    else{
                        ans = ans + (sc*ec) % mod;
                    }
                    start++;
                    end--;
                } 
                else if(arr[start] + arr[end] > temp) end--;
                else if(arr[start] + arr[end] < temp) start++;
            }
        }
        
        return ans;
    }
};
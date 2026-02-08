class Solution {
public:
   int lengthOfLongestSubstring(string s) {
       int first=0;
       int second=0;
       int len=0;
       vector<bool>temp(256,0);
       while(second<s.size())
       {
           while(temp[s[second]])
           {
               temp[s[first]]=0;
               first++;
           }
           temp[s[second]]=1;
           len=max(len,second-first+1);
           second++;
       }
       return len;
       

       
       
   }
};
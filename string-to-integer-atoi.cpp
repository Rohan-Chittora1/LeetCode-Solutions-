class Solution {
public:
   int myAtoi(string s) {
       if (s.empty()) {
           return 0;
       }
       long long res = 0;
       int start = 0;
       int size = s.size();
       
       
       while (start < size && s[start] == ' ') {
           start++; // Leading Space hatt jayenge iss se saare
       }

       // Check if we've reached the end
       if (start == size) {
           return 0;
       }
       // Abb sign check karenge
       int sign = 1;

       if (s[start] == '-') {
           sign = -1;
           start++;
       } else if (s[start] == '+') {
           start++;
       }

       // Now add numbers to res;
       while (start < size && isdigit(s[start])) {
           int digit = s[start] - '0';
           res = res * 10 + digit;
           if (sign * res <= INT_MIN) {
               return INT_MIN;
           }
           if (sign * res >= INT_MAX) {
               return INT_MAX;
           }

           start++;
       }
       return (res * sign);
   }
};
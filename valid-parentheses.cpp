class Solution {
public:
   bool isValid(string s) {
       int n=s.size();
       stack<char>temp;
       for(int i=0;i<n;i++)
       {
           if(s[i]=='(' || s[i]=='[' ||s[i]=='{')
           {
               temp.push(s[i]);
           }
           else
           {
               if(temp.empty()){
                   return 0;
               }
               else if(s[i]==')')
               {
                   if(temp.top()!='(')
                   {
                       return 0;
                   }
                   else
                   {
                       temp.pop();
                   }
               }
               else if(s[i]==']')
               {
                   if(temp.top()!='[')
                   {
                       return 0;
                   }
                   else
                   {
                       temp.pop();
                   }
               }
               else
               {
                   if(temp.top()!='{')
                   {
                       return 0;
                   }
                   else
                   {
                       temp.pop();
                   }
               }
           }
       }
       return temp.empty();
       
   }
};
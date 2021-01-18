class Solution
{
  public:
    string reverseWords (string s)
    {
      int l = s.length();
      int i;
      string ans="";
      stack<char>st;
      for(int i=0;i<l;i++){
          if(s[i]=='.'){
              while(!st.empty()){
                  ans = ans+ st.top();
                  st.pop();
              }
              ans = ans +".";
          }
          else{
              st.push(s[i]);
          }
      }
      while(!st.empty()){
          ans = ans + st.top();
          st.pop();
      }
      return ans;
    }
};

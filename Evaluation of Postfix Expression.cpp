int evaluatePostfix(string str)
{
   stack<int>st;
   for(int i=0; i<str.length();i++){
       if(str[i] == '+'){
           int a=st.top();
           st.pop();
           int b=st.top();
           st.pop();
           st.push(b+a);
       }
       else if(str[i] == '-'){
           int a=st.top();
           st.pop();
           int b=st.top();
           st.pop();
           st.push(b-a);
       }
       else if(str[i] == '*'){
           int a=st.top();
           st.pop();
           int b=st.top();
           st.pop();
           st.push(b*a);
       }
       else if(str[i] == '/'){
           int a=st.top();
           st.pop();
           int b=st.top();
           st.pop();
           st.push(b/a);
       }
       else{
           st.push(int(str[i])-'0');
       }
   }
   return st.top();
}


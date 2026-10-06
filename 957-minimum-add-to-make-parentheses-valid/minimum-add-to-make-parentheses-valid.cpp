class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>st;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push('(');
            }
            else{
                if(st.empty()||st.top()!='('){st.push(')');}
                else{st.pop();}
            }
        }
        return st.size();
    }
};
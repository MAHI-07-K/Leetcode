class Solution {
public:
    string removeOuterParentheses(string s) {
        string res="",temp="";
        stack<char>st;
        for(int i=0;i<s.size();i++){
            if(s[i]==')'){
                st.pop();
                if(st.empty()){res+=temp;temp="";}
                else{temp+=")";}
            }
            else{
                if(!st.empty()){temp+='(';}
                st.push('(');
            }
        }
        return res;
    }
};
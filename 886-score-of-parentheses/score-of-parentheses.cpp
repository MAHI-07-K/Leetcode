class Solution {
public:
    int solve(string s,int & i){
        int res=0;
        while(i!=s.size()){
            if(s[i]==')'){i++;return max(1,2*res);}
            res+=solve(s,++i);
        }
        return res;
    }
    int scoreOfParentheses(string s) {
        
        int i=0;
        return solve(s,i);
    }
};
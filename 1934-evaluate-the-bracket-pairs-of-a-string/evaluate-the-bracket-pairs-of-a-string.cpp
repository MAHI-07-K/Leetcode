class Solution {
public:
    string solve(int & i,string s,unordered_map<string,string>&mapped){
        string res="";
        for(i;i<s.size();i++){
            if(isalpha(s[i])){res+=s[i];}
            else{break;}
        }
        if(mapped.find(res)==mapped.end()){return "?";}
        return mapped[res];
    }
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string,string>mapped;
        for( auto i:knowledge){
           mapped[i[0]]=i[1];
        }
        string res="";
        for(int i=0;i<s.size();i++){
            if(isalpha(s[i])){
                res+=s[i];
            }
            else{
                res+=solve(++i,s,mapped);
            }
        }
        return res;
    }
};
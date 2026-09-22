class Solution {
public:
    vector<vector<string>>res;
    vector<pair<int,int>>queens;
    bool check(int i,int j){
        for( auto p:queens){
            if(p.first==i||p.second==j||abs(p.first-i)==abs(p.second-j)){
                return false;
            }
        }
        return 1;
    }
    void solve(vector<string>temp,int i){
        if(i==temp.size()){res.push_back(temp);}
        else{
            for(int j=0;j<temp.size();j++){
                if(check(i,j)){
                    temp[i][j]='Q';
                    queens.push_back({i,j});
                    solve(temp,i+1);
                    queens.pop_back();
                    temp[i][j]='.';
                }
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        string temp="";
        for(int i=0;i<n;i++){
            temp+='.';
        }
     vector<string>board(n,temp);
        solve(board,0);
        return res;
    }
};
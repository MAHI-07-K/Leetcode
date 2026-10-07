class Solution {
public:
    vector<vector<int>>res;
    void adder(vector<int>temp,int i,int int_limit,int size_limit){
        if(temp.size()==size_limit){res.push_back(temp);}
        for(i;i<=int_limit;i++){
            temp.push_back(i);
            adder(temp,i+1,int_limit,size_limit);
            temp.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int>temp;
        for(int i=1;i<=n-k+1;i++){
            temp.push_back(i);
            adder(temp,i+1,n,k);
            temp.pop_back();
        }
        return res;
    }
};
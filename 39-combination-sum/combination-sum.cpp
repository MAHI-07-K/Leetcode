class Solution {
public:
    vector<vector<int>>res;
    void find(vector<int>&temp,int i,int sum,vector<int>&candidates,int target){
        if(sum==target){res.push_back(temp);}
        for(i;i<candidates.size()&&sum+candidates[i]<=target;i++){
            temp.push_back(candidates[i]);
            
            find(temp,i,sum+candidates[i],candidates,target);
            
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int>temp;
        for(int i=0;i<candidates.size()&&candidates[i]<=target;i++){
            temp.push_back(candidates[i]);
            find(temp,i,candidates[i],candidates,target);
            temp.pop_back();
        }
        return res;
    }
};
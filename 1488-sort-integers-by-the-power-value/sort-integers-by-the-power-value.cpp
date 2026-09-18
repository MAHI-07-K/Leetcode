class Solution {
public:
    int dp[300001]={0};
    int get_power(int x){
        if(x==1){return 0;}
        else if(dp[x]==0){
            if(x&1){
                dp[x]=1+get_power(3*x+1);
            }
            else{
                dp[x]=1+get_power(x/2);
            }
        }
        return dp[x];
    }
    int getKth(int lo, int hi, int k) {
        vector<pair<int,int>>res;
        for(int i=lo;i<=hi;i++){
            res.push_back({get_power(i),i});
            // cout<<i<<' '<<res.back()[0]<<endl;
        }
        sort(res.begin(),res.end());

        return res[k-1].second;
    }
};
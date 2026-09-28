class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()<=3){int res=0;for(auto i:nums){res=max(res,i);}return res;}
        vector<int>dp1=nums,dp2=nums;
        dp1[nums.size()-3]=max(dp1[nums.size()-3],dp1[nums.size()-2]);
        int dp1_max=INT_MIN,dp2_max=INT_MIN;
        for(int i=nums.size()-4;i>=0;i--){
            dp1[i]=max(dp1[i+1],dp1[i]+dp1[i+2]);
            dp1_max=max(dp1_max,dp1[i]);
        }
        dp2[nums.size()-2]=max(dp2[nums.size()-2],dp2.back());
        for(int i=nums.size()-3;i>=1;i--){
            dp2[i]=max(dp2[i+1],dp2[i]+dp2[i+2]);
            dp2_max=max(dp2_max,dp2[i]);
        }
        // for(int i=0;i<dp1.size()&&i<dp2.size();i++){
        //     cout<<dp1[i]<<' '<<dp2[i]<<endl;
        // }
        return max(dp1_max,dp2_max);
    }
};
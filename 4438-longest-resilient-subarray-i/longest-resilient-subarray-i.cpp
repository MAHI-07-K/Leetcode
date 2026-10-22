class Solution {
public:
    int resilientSubarray(vector<int>& nums, int k) {
     vector<int>diff(nums.size());
     for(int i=0;i<nums.size();i++){
        diff[i]=(nums[i]%k);
        if(i!=0){nums[i]+=nums[i-1];}
        // cout<<diff[i]<<' '<<nums[i]<<endl;
     }   
     int res=1,l=0,r=0;
     while(r<nums.size()){
        if(diff[l]==diff[r]){
            r++;
        }
        else{
            l++;
        }
        int r_sum,l_sum;
            if(l==0){l_sum=0;}
            else{l_sum=nums[l-1];}
            r_sum=nums[r-1];
            if((r_sum-l_sum-diff[l])%k==0){
                res=max(res,r-l);
            }
     }
    int r_sum,l_sum;
    if(l==0){l_sum=0;}
    else{l_sum=nums[l-1];}
    r_sum=nums[r-1];
    if((r_sum-l_sum-diff[l])%k==0){
        res=max(res,r-l);
    }
    l=r;
     return res;
    }
};
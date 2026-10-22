class Solution {
public:
    int resilientSubarray(vector<int> nums, int k) {
     vector<long long>diff(nums.size()),nums2;
     for(auto i:nums){
        nums2.push_back(i);
     }
     for(int i=0;i<nums2.size();i++){
        diff[i]=(nums2[i]%k);
        if(i!=0){nums2[i]+=nums2[i-1];}
        // cout<<diff[i]<<' '<<nums2[i]<<endl;
     }   
     int res=1,l=0,r=0;
     while(r<nums2.size()){
        if(diff[l]==diff[r]){
            r++;
        }
        else{
            l++;
        }
        long long r_sum,l_sum;
            if(l==0){l_sum=0;}
            else{l_sum=nums2[l-1];}
            r_sum=nums2[r-1];
            if((r_sum-l_sum-diff[l])%k==0){
                res=max(res,r-l);
            }
     }
    long long r_sum,l_sum;
    if(l==0){l_sum=0;}
    else{l_sum=nums2[l-1];}
    r_sum=nums2[r-1];
    if((r_sum-l_sum-diff[l])%k==0){
        res=max(res,r-l);
    }
    l=r;
     return res;
    }
};
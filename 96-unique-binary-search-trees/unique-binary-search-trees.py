class Solution:
    def solve(self ,n:int,dp :list) -> int:
        if n<=1:
            return 1
        res=0
        for i in range(0,n,1):
            if dp[i]==0:
                dp[i]=self.solve(i,dp)
            if dp[n-i-1]==0:
                dp[n-1-i]=self.solve(n-1-i,dp)
            res+=dp[i]*dp[n-1-i]
        return res

    def numTrees(self, n: int) -> int:
        if n<=1:
            return 1
        res=0
        dp=[0]*n
        for i in range(0,n,1):
            if dp[i]==0:
                dp[i]=self.solve(i,dp)
            if dp[n-i-1]==0:
                dp[n-1-i]=self.solve(n-1-i,dp)
            res+=dp[i]*dp[n-1-i]
        return res
        

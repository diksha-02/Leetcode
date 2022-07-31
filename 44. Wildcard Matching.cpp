class Solution {
public:
    bool fun(int i,int j,string &p, string &s,vector<vector<int>>&dp){
        if(i<0 && j<0) return true;
        if(i<0 && j>=0) return false;
        if(i>=0 && j<0){
            for(int a=0;a<=i;a++) if(p[a]!='*') return false;
            return true;
        }
            
        if(dp[i][j]!=-1) return dp[i][j];
       if(p[i]==s[j] || p[i]=='?') return dp[i][j] = fun(i-1, j-1, p, s, dp);
        
        if(p[i]=='*') return dp[i][j] = fun(i-1, j, p, s, dp) || fun(i, j-1, p, s, dp);
        
        return dp[i][j] = false;
    }
    bool isMatch(string s, string p) {
        int n=s.size();
        int m=p.size();
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return fun(m-1,n-1,p,s,dp);
    }
};

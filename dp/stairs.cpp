
int n;
vector<int> dp;
int sol(int a)
{
    if (a == n  )
    return 1 ;
    
    
    else if (a > n )
    return 0 ;
    
    else 
     
    {
        int on , du ;
        if (dp[a+1] == -1 )
        dp[a+1]= sol(a+1);
        if (dp[a+2] == -1)
        dp[a+2] = sol(a+2);
        
        return dp[a+1] + dp[a+2];
        
        
    }
}
int Solution::climbStairs(int A) {
    
    n = A ;
     dp.assign( 100 ,  -1) ;
    
    return sol(0);
    
    
}


int paths ( int i , int j ,  vector<vector<int>>&dp   ) { 
     // if the index is negative simply return 0 as path will not exists on negative index
     if ( i < 0 || j < 0 ) return 0 ; 
     // if index is 0 , 0 then it means you have reached the destination 
     // so return 1 
     if ( i == 0 && j == 0 ) return 1 ; 
     // if dp[i][j] contains a value simply return value stored in the dp array 
     if ( dp [ i ] [ j ] != -1 ) return dp [ i ] [ j ] ; 
     // going up from m-1 , n - 1 to 0 , 0 
     int up = paths( i -1 , j , dp  ) ; 
     int left = paths( i , j -1 , dp  ) ; 
     // the total paths existing will be sum of all possible paths 
     return dp [ i ] [ j ] = up + left ; 
     
      
}
    int uniquePaths(int m, int n) {
       vector<vector<int>>dp(m, vector<int>(n, -1 ));
        
        
        return paths (m -1 , n -1  , dp  ) ; 
        
    }
};
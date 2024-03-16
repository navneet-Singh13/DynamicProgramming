// same as fibonacci solution
class Solution {
public:
int  ClimbingStairs(int n ,  vector<int>&dp  ) { 
    if ( n == 0 || n == 1  ) { 
        // if youre at 0th stair then you can't climb 1 step or 2 step 
        // so we return 0 ; 
        // if youre at 1th stair then you can only climb down 1 step to the ground 
        return n  ; 
    }
    if ( dp [ n  ] != -1 ) return dp [ n ] ; 
    int left = ClimbingStairs( n - 1  , dp ) ; 
    // it is written that we can either take 1 step or 2 steps 
    int right = ClimbingStairs ( n - 2  , dp ) ; 
    dp [ n ]  = left + right ;

    return dp [ n ] ;  
   
}
    int climbStairs(int n) {
        n+=1 ; 
        vector<int>dp( n + 1 , -1 ) ; 
       return ClimbingStairs( n  , dp  ) ; 
       
    }
};
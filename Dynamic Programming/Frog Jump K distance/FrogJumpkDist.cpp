#include<iostream> 
using namespace std ; 
int JumpKdist(int index , int heights [ ]  , int dp [ ]  , int k ) { 
   if ( index == 0 ) return index  ; 
   int minsteps = 10000000 ; 
   if ( dp [ index ] != -1 ) return dp[ index ] ; 
   for ( int j = 1 ; j <= k ; j ++ ) { 
      if ( index - j >=0) { 
         int jump = JumpKdist( index - j , heights , dp , k ) + abs ( heights [ index] - heights [ index - j ]) ; 
         minsteps = min ( jump , minsteps ) ; 
      }
   }
   return dp[ index ] = minsteps ; 
}
int main ( ) { 
   int n = 6 ; 
   int heights [6] = {30 , 10 , 60, 10 ,60, 50} ;
   int dp [ n ] = { -1 , -1 , -1 , -1 , -1 , -1 }; 
   cout << JumpKdist( n - 1 , heights , dp  , 1 ) ; 

	return 0 ; 
}
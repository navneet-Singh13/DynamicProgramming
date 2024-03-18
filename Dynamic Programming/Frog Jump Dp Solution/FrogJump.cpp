#include<bits/stdc++.h>
using namespace std ; 
int FrogJump(int index , int *heights  , int *dp) { 
	if ( index == 0 ) { 
		
		return 0 ; 
	}
	// if there is already a value in the dp array then 
	if ( dp[ index ] != -1 ) return dp [ index ] ; 

	int left = FrogJump ( index - 1 , heights , dp  ) + abs(heights [ index ] - heights [ index -1 ]) ; 

	// In this i said recursion to find steps from index - 1 and i added one computation for 
	// going from index to index - 1 
	// now if ( index is <= 1 ) then 1 - 2 = -1 , then 
	// -1 index is not possible 
	// so right computation can only be found when index is 
	// > 1 
	// by default in case index is <1 
	// so i'm setting right value to be bydefault as INT_MAX ;
	// So that left recursion call could be an potential answer when taking the minimum 
	int right = INT_MAX ;
	if ( index > 1 ) { 
		right = FrogJump( index - 2 , heights , dp ) + abs ( heights [index] - heights [ index - 2 ]) ; 

	}

	dp [ index ] = min ( left , right ) ; 
	return dp [ index ] ; 

}
int main ( ) { 
   int n = 6 ; 
   int heights [6] = {30 , 10 , 60, 10 ,60, 50} ;
   int dp [ n ] = { -1 , -1 , -1 , -1 , -1 , -1 }; 
   cout << FrogJump( n - 1 , heights , dp ) ; 







	return 0 ; 
}
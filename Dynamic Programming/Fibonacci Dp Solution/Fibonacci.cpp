#include<bits/stdc++.h>
using namespace std ; 
int fac( int n , vector<int>&dp) {
	if ( n <= 1 ){ 
		dp[ n ] = n ; 
		return n ; 
	}
	if ( dp [ n ]!=-1 ) return dp [ n ] ; 

	return dp [ n ] = fac( n -1  , dp ) + fac ( n - 2 , dp ) ; 
}
int main ( ) { 
	vector<int>dp ( 6 , -1 ) ; 
	cout << fac( 5 , dp ) ; 

	for ( int i = 0 ; i < dp.size( ) ; i ++ ){ 
		cout << dp[ i ]  << " , "; 
	}





	return 0 ; 
}
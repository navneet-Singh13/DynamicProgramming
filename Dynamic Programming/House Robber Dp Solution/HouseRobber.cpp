#include<iostream>
using namespace std ; 

int func(int index , int arr [ ]  , int dp [ ] ) { 

   if ( index == 0 ){ 
      // this means i haven't visited index 1 
      // so i have to pick index 0 
      return arr [index] ; 
   }
   // if index is 0 then ans will be 0 because -ve index doesn't exists in the array 

   if ( index < 0 ) return 0 ; 


   // if i have picked up the index then i can't pick the adjacent ones 
   // so i have done index - 2 
   // in the next recursion call
   if ( dp [ index ] != -1 ) return dp [ index ] ; 

   int pick = -1000000  ; 

   if ( index > 1 ){ 
       pick = arr [ index ] + func (index - 2  , arr  , dp ) ; 
   }
   
   // if i havent picked up that particular index then i can pick its adjacent index 

   int notpick = 0 + func ( index - 1 , arr  , dp ); 

   return dp [ index ] =  max ( pick , notpick ); 

}



int main ( ) { 
   int n = 6 ; 
   int arr [6] = {30 , 10 , 60, 10 ,60, 50} ;
   int dp [ n ] = { -1 , -1 , -1 , -1 , -1 , -1 }; 
   cout << func( 5 , arr , dp ) ; 

	return 0 ; 
}
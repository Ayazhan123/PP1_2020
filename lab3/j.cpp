/*
Given a sorted array and a target value, return the index if the target is found. If not, return the index
where it would be if it were inserted in order.
You may assume no duplicates in the array.
*/
#include <iostream>
using namespace std;
int main (){
   
   int n , l;
   cin >> n >> l ;
   int arr[n];
   for (int i = 0 ; i < n ; i++ ){
   cin >> arr[i];
   }
   int index=0;
   for (int i=0 ; i < n ; ++i){
       if (l>=arr[i]){
           index=i+1 ;
       }
   }
   cout << index << "\n" ;
       

   

return 0;
}
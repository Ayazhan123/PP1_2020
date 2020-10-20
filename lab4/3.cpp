//need to find count of negative numbers

#include <iostream>
using namespace std;
int main(){
    
   int n;
   cin >> n;
   int m;
   cin >> m;
   int arr[n][m];
   for (int i=0 ; i<n ; ++i){
       for (int j=0 ; j<m ; ++j){
           cin >> arr[i][j] ;
       }
   }
   int cnt=0 ;
   for (int i=0 ; i<n ; ++i){
       for (int j=0 ; j<m ; ++j){
           if (arr[i][j]<0){
               cnt++ ;
           }
       }
   }
   cout << cnt ;
   return 0;

}
#include <iostream>
using namespace std;
int main (){
    
    int n, m ;
    cin >> n >> m ;
    int a[n][m];
    for (int i=0 ; i<n ; ++i){
        for (int j=0 ; j<m ; ++j){
            cin >> a[i][j];
        }
    }
     int sum[n] ;
    for (int i=0 ; i<n ; ++i){
        sum[i]=0;
        for (int j=0; j<m ; ++j){
            sum[i]+=a[i][j];
        }
    } 
    int max=-1 , cnt=0 ;
    for (int i=0 ; i<n ; i++){
               if (sum[i] > max) {
                   max=sum[i] ;
               } 
        
    }
    for (int i=0 ; i<n ; i++){
               if (sum[i] == max) {
                   cnt ++ ;
               } 
        
    }

    cout <<  cnt ;

    return 0;
}

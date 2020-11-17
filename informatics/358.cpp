#include <iostream>
using namespace std;
int main () {
    
    int n , m ;
    cin >> n >> m ;
    int a[n][m] ;

    for (int i=0 ; i<n ; i++){
        for (int j=0 ; j<m ; j++){
            cin >> a[i][j];
        }
    }  int sum[n] ;
    for (int i=0 ; i<n ; ++i){
        sum[i]=0;
        for (int j=0; j<m ; ++j){
            sum[i]+=a[i][j];
        }
    }
    int max=-1 , maxi=-1  ;
    for (int i=0 ; i<n ; i++){
        for (int j=0 ; j<m ; j++){
            if (a[i][j] > max ) {
                max=a[i][j];
                maxi=i ;
            }/* else if (a[i][j] > max && (sum[i] < sum[i+1]) && (sum[i+1] > max_sum) ) {
                max_sum = sum[i+1] ;
                max = a[i][j] ;
                maxi = i+1 ;
            }*/
        }
    }
    cout << maxi ;

    return 0;
}
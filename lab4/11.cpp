/* 
the sum of every row numbers
the sum of every column numbers
*/
#include <iostream>
using namespace std;
int main(){
    
    int n , m;
    cin >> n >> m;
    int a[n][m];
    for (int i=0 ; i<n ; ++i){
        for (int j=0; j<m ; ++j){
            cin >> a[i][j];
        }
    }
    int sum1[n];
    for (int i=0 ; i<n ; ++i){
        sum1[i]=0;
        for (int j=0; j<m ; ++j){
            sum1[i]+=a[i][j];
        }
        cout <<"The sum of row number " << i+1 << " is " << sum1[i] << endl;
    }
    int sum2[m];
    for (int j=0 ; j<m ; ++j){
        sum2[j]=0;
        for (int i=0; i<n ; ++i){
            sum2[j]+=a[i][j];
        }
        cout <<"The sum of column number " << j+1 << " is " << sum2[j] << endl;
    }
    
    return 0 ;
}

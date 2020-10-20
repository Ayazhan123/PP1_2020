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
    int best=-1;
    int r=-1;
    int c=-1;
    for (int i=0 ; i<n ; ++i){
        for (int j=0 ; j<m ; ++j){
            if (best < a[i][j]) {
            best = a[i][j];
            r=i;
            c=j;
            }
        }
    }
    cout << best << endl << r << " "<< c ;
    return 0;
}
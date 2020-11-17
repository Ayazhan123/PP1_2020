#include <iostream>
using namespace std;
int main (){
    
    int n;
    cin >> n ;
    int a[n][n] ;

    for (int i=0 ; i<n ; i++){
        for (int j=0 ; j<n ; j++){
            cin >> a[i][j];
        }
    }
    bool matrix = true ;
    for (int i=0 ; i<n ; i++){
        for (int j=0 ; j<n ; j++){
            if (a[i][j] != a[j][i]){
                matrix = false ;
            } 
        }
    }

    if (matrix == false ) cout << "no";
    else cout << "yes";
    
    return 0;
}

/*  0 1 2 3

 0  1 2 3 4
 1  5 6 7 8
 2  9 1 2 3 
 3  4 5 6 7

 i=j
*/
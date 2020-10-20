//need to find the largest number

#include <iostream>
using namespace std;
int main(){
    
    int n;
    cin >> n;
    int arr[n][n];
    for (int i=0 ; i<n ; ++i){
        for (int j=0; j<n ; ++j){
            cin >> arr[i][j];
        }
    }
    int best=0 ; 
    for (int i=0 ; i<n ; ++i){
        for (int j=0 ; j<n ; ++j){
            if (best<arr[i][j]) {
                best = arr[i][j];
            }
        }
    }
    cout << best << endl;
    return 0 ;
}
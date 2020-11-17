#include <iostream>
using namespace std;
 
void read(int arr[] , int n){
    for (int i=0 ; i<n ; i++ ){
        cin >> arr[i];
    }
}

void result(int a[] , int b[] , int d[] , int n){
    for (int i=0 ; i<n ; i++){
        d[i] = abs(a[i] - b[i]);
    }
    for (int i=0 ; i<n ; i++){
        cout << d[i] << " ";
    }
}


int main(){

    int  n ;
    cin >> n ;
    int a[n] , b[n] , d[n];
    
    read(a , n);
    read(b , n);

    result(a , b , d , n);

    
    return 0 ;
}
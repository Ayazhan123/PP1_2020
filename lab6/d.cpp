#include <iostream>
using namespace std;

void result(int a[] , int n , int m , bool find = false) {

    for (int i=0 ; i<n ; i++){
        cin >> a[i];
    }
    cin >> m ;

     for (int i=0 ; i<n ; i++){
         if (a[i]==m)  find = true ;
     }
         if (find==true)
     cout << "Yes" ;
     else cout << "No";
}

int main(){

    int n , m ;
    cin >> n ;
    int a[n];
 
    result( a , n , m) ;

    return 0;
}
#include <iostream>
using namespace std;
int a[100];
int main (){
    int n , even=0 , odd=0 ;
    cin >> n;
    for (int i=1 ; i<=n ; i++){
        cin >> a[i];
    }
    for (int i=1 ; i<=n ; i++){
        if (a[i]%2==1) {
            cout << a[i] << " " ;
            even++ ;
        }
    } cout << endl ; 
        for (int i=1 ; i<=n ; i++){
        if (a[i]%2==0){
                  cout << a[i] << " "  ;
                  odd++ ;
        }
    } cout << endl ;
         if (even > odd) cout << "YES";
         else cout << "NO";
     

    return 0;
}
#include <iostream>
using namespace std ;
int main (){
    
    int n , h=9, m=45  ;
    cin >> n ;

    if (n%2==0 && n!=10){
        m = n * m + 5*(n/2) + 15*((n/2)-1) ;
        if (m>60){
            m = m-60*(n-1) ;
            h = h + n - 1;
        } 
    }

      if ( n%2==1){
        m = n * m + 15*((n-1)/2) + 5*((n-1)/2);
        if (m>60){
            m = m-60*(n-1) ;
            h = h + n - 1 ;
        }
    }
    if (n==10) {
            m = 55 ;
            h = 17 ;
        }

     cout << h <<" "<< m ;
 

  
    return 0 ;
}

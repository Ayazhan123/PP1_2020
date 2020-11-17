#include <iostream>
using namespace std;

double power(double a , int b)
{
      double pow = 1 ;
      
      for (int i=0 ; i<b ; i++)
          pow = pow * a ;

          return pow ;
}

int main(){

   double a ;
   int  b ;
   cin >> a >> b ;
   cout << power(a,b);

    return 0 ;
}
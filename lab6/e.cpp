#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void hyp(int a , int b){
     
     double h ;
     h = sqrt(a*a + b*b) ;
     cout << setprecision(4) << h ;

}
int main(){

 int a , b , h ;
 cin >> a >> b ;
 hyp(a,b);


    return 0 ;
}
#include <iostream>
using namespace std;

int SumOfDigits(string s , int res){

if (int(s)==48) return res;
return SumOfDigits()

}
 int getSum(int n) 
{  
   int sum = 0; 
   while (n != 0) 
   { 
       sum = sum + n % 10; 
       n = n/10; 
   } 
   return sum; 
} 

int main(){

    string x;
    cin >> x ;
    cout << SumOfDigits(x , 1) ;

    return 0 ;

}
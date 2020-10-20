//Among n numbers you need to count the number of numbers that ends with 7.

#include <iostream>
using namespace std;
int main () {

     int n , cnt = 0 ; 
     cin >> n;
     for (int i=0; i < n ; i++)
     {
         int t;
         cin >> t;
         if (t%10==7) cnt++;
     }
     cout << cnt;
    return 0;

}
/*
Input
Two integers are given.
Output
The program should output the number 1 if the first number is greater than the second, the number 2 if
the second is greater than the first, or the number is 0 if they are equal.
*/
#include <iostream>
using namespace std;
int main () {

    int n, k ;
    cin >> n >> k ;
    if (n > k) cout <<"1" ;
    else if (n < k) cout <<"2";
         else if ( n = k) cout <<"0";
    return 0;
}
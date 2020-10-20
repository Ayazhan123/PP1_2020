/*
Code is constructed from two numbers n
and m. The first number - age of the contestant. The second number - sum of the first and the last digits
of the 3-digit random number k given by administration of the finals. 
Input:
The first line contains non-negative number n (1 6 n 6 1 000) - age of the contestant. The second line
contains non-negative number k (100 6 k 6 1 000) — random number.
Output:
Calculate the sum of the numbers n and m.
*/

#include <iostream>

using namespace std;

int main () {

    int n, k;
    
    cin >> n >> k ;

    int m = (k%10) + (k/100);
    
    int ans = n + m;

    cout << ans << endl;
    
    return 0;
}

//Given n numbers you need to count the number of even and the number of odd numbers from the given list

#include <iostream>
using namespace std;
int main () {
    
    int n, even=0 , odd=0 ;
    cin >> n;
    for (int i=0 ; i < n ; i++)
    {
        int t;
        cin >> t;
        if (t%2==0) even++;
        else odd++ ;
    }
 cout << even << " "<< odd;
    return 0;

}
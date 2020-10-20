/*
Given an array consisting of integers. Write program, which will get sum of elements a[i], where i
(l < i < r).
*/
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    
    long n, l, r, sum=0;
    cin >> n ;
    cin >> l >> r ;
    int a[n];
    for (int i=0 ; i<n ; i++){
        cin >> a[i];
    }
    for (int i=l-1 ; l<r ; i++){
        sum+=a[i];
    }
    
    cout << sum ;

    return 0;
}
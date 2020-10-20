/*
Given an array consisting of integers. Write a program, which will change all maximal elements to minimal
elements of the array. Look to sample to better understand the conditions.
*/
#include <iostream>
using namespace std;
int main (){
    int n , max=-1111111, min=1111111;
    cin >> n;
    int a[n];
    for (int i=0; i<n ; i++){
        cin >> a[i];
        if (a[i] > max) max=a[i] ;
        if (a[i] < min) min=a[i]; 
        }
        for (int i=0 ; i<n ; i++){
        if (a[i]==max) a[i]=min;
        }
        for (int i=0 ; i<n ; i++){
        cout << a[i] << " ";
        }
    return 0;
}
/*
Given an array consisting of integers. Write a program, which finds position of maximum element of array.
If maximums is two or more you should output first position.
*/
#include <iostream>
using namespace std;
int main (){

    int n , maxi=-1234567890 , maxii=-1234567890;
    cin >> n;
    int arr[n];
    for (int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
        for (int i=0 ; i < n ; i++){
                if (arr[i] > maxi ) {
                maxi=arr[i];
                maxii = i;
                }
        }
            
            cout << maxii +1 ;
        
    return 0;
}
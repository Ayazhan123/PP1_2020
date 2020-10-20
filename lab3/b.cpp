//Given an array consisting of integers. Write a program, which outputs count of positive numbers in array

#include <iostream>
using namespace std;
int main (){
    
    int n , pos= 0;
    cin >> n;
    int arr[n];
    for (int i=0 ; i<n ; i++){
        cin >> arr[i];
    }
     for (int i=0 ; i < n ; i++){
         if (arr[i] > 0) cout << pos++;
     }
     
    return 0;
}
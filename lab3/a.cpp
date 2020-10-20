//Given an array consisting of integers. Write a program, which outputs all odd elements of array

#include <iostream>
using namespace std;
int main (){

    int n;
    cin >> n;
    int arr[n];
    for (int i=0; i<n ; i++){
        cin >> arr[i];
        if (arr[i]%2 != 0)
        cout << arr[i] << " ";
    }
    
   
    return 0;
}
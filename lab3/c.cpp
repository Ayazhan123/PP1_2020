//Given an array consisting of integers. Write a program, which outputs maximum in array

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
                if (arr[i] > maxi ) 
                maxi=arr[i];
        }
            
            cout << maxi ;
        
}

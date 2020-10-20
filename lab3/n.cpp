//Given an array, output the square value of each element.

#include <iostream>
#include <cmath>
using namespace std;
int main (){
    
    int n;
    cin >> n;
    int arr[n];
    for (int i=1 ; i<=n ; i++){
        cin >> arr[i];
    }
    for (int i=1 ; i<=n ; i++){
       cout << arr[i]*arr[i] << " " ;
    }
    return 0;
}
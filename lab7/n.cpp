#include <iostream>
using namespace std;

string f(int a[] , int i , int n , int k){
    if (i==n) return "no";
    for (int j=0 ; j<n ; j++){
        if (i != j){
            if (abs(a[i] - a[j]) <= k){
                return "cheater";
            }
        }
    }
    return f(a , i+1 , n , k);
}

int main(){

int n , k;
cin >> n >> k ;

int a[n];
for (int i=0 ; i<n ; i++){
    cin >> a[i];
}
cout << f(a , 0 , n , k);

    return 0 ;

}
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

bool Prime(int n){
    if (n==1) return false;
    for (int i=2 ; i< sqrt(n) ; i++){
        if (n%i == 0) return false;
    }
    return true ;
}

int main(){

    int n , k ,a , cnt=0;
    cin >> n ;
    vector<int> v;

    for (int i=0 ; i<n ; i++){
        cin >> a;
        v.push_back(a);
    }
    cin >> k ;
    for (int i=0 ; i<v.size() ; i++){
        if (v[i] > k && Prime(v[i]))
        cnt++ ;
    }
    cout << cnt ;
    return 0 ;
}
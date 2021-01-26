#include <iostream>
#include <cmath>

using namespace std;

bool prime(int a){

    bool res=true;

    for(int i=2 ; i<sqrt(a) ; i++){
        if (a%i==0) res=false;
    }

    if (res==false || a==1) return false;
    else return true;

}

int main(){

int n;
cin >> n;

for(int i=2 ; i<n ; i++){
    if (prime(i) && prime(n-i)){
        cout << i << " "<< n-i << endl;
        break;
    }
}

    return 0;
}
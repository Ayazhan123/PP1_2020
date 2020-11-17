#include <iostream>
using namespace std;
int main(){
    
    int  n ;
    cin >> n ;
    if (n<1440){
    cout << n/60 << " " << n%60 ;
    } else if (n>=1440) {
        cout << (n%1440)/60 << " " << (n%1440)%60 ;
    }
    return 0;

}
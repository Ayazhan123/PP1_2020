#include <iostream>
using namespace std;
int main () {

    long v , t ;
    cin >> v >> t ;
     int s = (v * t) % 109 ;
     s = (109 + s) % 109; ;
    cout << s ;
    return 0 ;
}
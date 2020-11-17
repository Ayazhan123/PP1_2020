#include <iostream>

using namespace std;

int main () {
    int h, a, b, shag, h0; // c = shag , d = h0;
    cin >> h >> a >> b;
    h0 = h - a;
    shag = a - b;
    
    cout << 1 + h0 / shag + (h0 % shag + shag - 1) / shag << endl;

    return 0;
}
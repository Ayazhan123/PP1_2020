#include <iostream>

using namespace std;

int main () {
    int n;
    cin >> n;
    int ch1, ch2;
    ch1 = n / 100;
    ch2 = n % 100;
    ch2 = ch2 % 10 * 10 + ch2 / 10;

    cout << ch1 - ch2 + 1 << endl;
    return 0;
}
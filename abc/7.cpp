#include <iostream>

using namespace std;
int main()
{
    int k = 0;
    string s;
    getline(cin, s);
    int pos = s.find(" ");
    while(pos + 1){
        ++k;
        pos = s.find(" ", pos + 1);
    }
    cout << ++k;
    return 0;
}
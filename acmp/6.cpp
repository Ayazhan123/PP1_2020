#include <iostream>
#include <string>
using namespace std;
    
    bool coordinate(string s) {
        if (s.size() != 5 ) return false ;
        if (s[2] != '-') return false ;
        if (s[1] < '1' || s[1] > '8') return false ;
        if (s[4] < '1' || s[4] > '8') return false ;
        if (s[0] < 'A' || s[0] > 'H') return false ;
        if (s[3] < 'A' || s[3] > 'H') return false ;
        return true ;
    }
    bool step(string s) {
        if ((abs(int(s[0]) - int(s[3])) == 2 && abs(int(s[1]) - int(s[4])) == 1) || (abs(int(s[0]) - int(s[3])) ==1 && abs(int(s[1]) - int(s[4])) ==2))
            return true ;
            return false ;
    }

    int main() {
        string s;
        cin >> s;
        if (coordinate(s)) {
            if (step(s)) cout << "YES" ;
            else cout << "NO" ;
        }
        else cout << "ERROR" ;
    }


/*
You’re given string s, and two integers l, r. You need to output substring s[l; r]. Numeration of characters
in s starts from 0. Guaranteed that l, r can’t be out of the border of string
*/

#include <iostream>
#include <string>
using namespace std;
int main(){
    
    string str;
    int l, r;
    cin >> str >> l >> r;
    for (int i=l ; i<=r ; i++){
        cout << str[i] ;
    }

    return 0;
}
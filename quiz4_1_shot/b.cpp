#include <iostream>
#include <string>

using namespace std;

int main(){

string s;
cin >> s;

for(int i=0 ; i<s.size() ; i++){
    cout << char('z' - s[i] + 'a') ;
} 

    return 0 ;
}
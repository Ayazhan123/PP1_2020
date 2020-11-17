#include <iostream>
#include <string>
using namespace std;

void vow(string s){
    for (int i=0 ; i<s.size() ; i++){
        if (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
        continue ;
        cout << s[i] ;       
    }
}

int main(){

    string s;
    getline(cin , s);
    vow(s) ;

    return 0 ;
}
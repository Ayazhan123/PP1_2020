#include <iostream>
#include <string>
using namespace std;

void cap(string s){
    cin >> s ;
    for (int i=0 ; i<s.size() ; i++){
        if (s[i]>=97 && s[i] <= 122 && i%2==0){
            s[i]=s[i]-32 ;В
        }
    }
    for (int i=0 ; i<s.size() ; i++){
        cout << s[i];
    }
}

int main(){

    string s;
    cap(s);

    return 0 ;
}
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

bool check(char s){
    if (s>='0' && s<='9') return true;
    else return false ;
}

int main(){

string s;
cin >> s;

for(int i=0 ; i<s.size() ; i++){

if(check(s[i])){
    if((s[i]-'0')%3==0) cout << "yes" << " " ;
}

}


    return 0;
}
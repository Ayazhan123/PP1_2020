#include <iostream>
#include <string>

using namespace std ;

void poliglot(string a , string b){

for (int i = 0; i < a.size() ; ++i ) { 

    if ( a.substr(i, b.size())==b ) { 

        cout << i << " "; 
        
        } 
    } 

}

int main(){

string s;
cin >> s;

string x;
cin >> x;

poliglot(s , x);

    return 0 ;
}
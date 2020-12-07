#include <iostream>
#include <string>

using namespace std;

int main(){

string s;
int cnt=0 ;

while(cin >> s){
    for(int i=0 ; i<s.size(); i++){
        cnt++ ;
    }
    break ;
}

cout << cnt << " " ;

    return 0 ;
}
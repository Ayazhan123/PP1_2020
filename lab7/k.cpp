#include <iostream>
using namespace std;

int MaxDig(string s , int i , char ans){
    if (i==s.size()) return ans;
    return MaxDig(s, i+1 , max(ans, s[i])) ;
} 

int main(){

    string s;
    cin >> s;
    cout << char(MaxDig(s , 0 , '0')) ;

    return 0 ;

}
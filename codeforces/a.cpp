//здача "слишком длинные слова"

#include <iostream>
#include <string>

using namespace std;

bool check(string s){
    int cnt=0;
    
    for(int i=0 ; i<s.size() ; i++){
        cnt++;
    }

    if (cnt>4) return false;
    else return true;
}

int f(string s){

    int cnt=0;
    for(int i=0 ; i<s.size() ; i++){

        if (i>0 && i<s.size()-1) cnt++ ;
        
    }
    return cnt;
}

int main(){

int n;
cin >> n;

for(int i=0 ; i<n ; i++){
    string s;
    cin >> s;
    if (check(s)) cout << s << endl;
    else 
    for(int j=0 ; j<s.size() ; j++){
        cout << s[0] << f(s) << s[s.size()-1] << endl;
        break;
    }
    
}

    return 0;
}
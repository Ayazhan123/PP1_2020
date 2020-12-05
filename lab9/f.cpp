#include<iostream>
#include<stack>

using namespace std;

int main(){

string str;
cin >> str;

stack <char> s;

bool correct = true ;

for (int i=0 ; i<str.size() ; i++){
    if (str[i]=='('){
        s.push('(');
    }
    else if (str[i]==')'){
        if (!s.empty()){
            s.pop();
        }
        else {
            correct = false ;
            break ;
        }
    }
}

if (!s.empty() || correct==false){
    cout << "NO" ;
}
else cout << "YES" ;

    return 0 ;
}
#include <bits/stdc++.h>
using namespace std;
int N = 25;

string fun(string s){
    for(int i = 0; i < s.size(); ++i){
        char c = (N-(s[i]-'a'))+'a';
        swap(c, s[i]);
    }
    return s;
}

int main(){
    string s; 
    cin >> s;
    cout << fun(s);
}
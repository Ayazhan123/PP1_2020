#include <iostream>
using namespace std;

string getString(string s, string u, string v){
    int i = 0;
    while(i < s.size()){
        if (s[i] == ' ') {
            if (v.size() < u.size()) v = u;
            u = "";
        }
        else{
            u += s[i];
        }
        i++;
    }
    return v;
}

int main() {
    string s;
    getline(cin, s);
    string u = "";
    string v = "";
    cout << getString(s, u, v);
}
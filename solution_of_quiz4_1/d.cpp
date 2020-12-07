#include <bits/stdc++.h>
using namespace std;

int main() { 
    string s, t; 
    cin >> s >> t; 
    int i = 0;
    while(i < s.length()){
        if (t == s.substr(i, t.size()) ) cout << i << " "; 
        i++;
    }
}
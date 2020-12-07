#include <bits/stdc++.h>
using namespace std;

void f(int n, int tos, int tob, string s){
    int cnts = 0, cntb = 0;
    for(int i = 0; i < n; i++){
        if(s[i] >= 'a' and s[i] <= 'z') cnts++;
        else cntb++;
    }
    cout << min(cnts*tob, cntb*tos);
}

int main(){
    int n, tos, tob;
    cin >> n >> tos >> tob;
    string s; cin >> s;
    f(n, tos, tob, s);
}
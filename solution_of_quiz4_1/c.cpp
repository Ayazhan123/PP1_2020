#include <bits/stdc++.h>
using namespace std;

void f(string s){
    sort(s.begin(), s.end());
    do{
        cout << s << "\n";
    }while(next_permutation(s.begin(),s.end()));
}

int main(){
    string s; 
    cin >> s;
    cout << "The anagram variants for string "<< s << " are:" << endl;
    f(s);
}
#include <iostream>

using namespace std;

int check(string s, int i, int ans){
    if(i == s.size()) 
    return ans;
    ans += s[i] - '0';
    return check(s, i + 1, ans);

}

int main () {
    string s;
    cin >> s;

    cout << check(s, 0, 0);
    cout << endl;
    return 0;
}
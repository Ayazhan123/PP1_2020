#include <bits/stdc++.h>

using namespace std;

bool isValid (string s, int n) {
  int cnt = 0;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] >= '0' && s[i] <= '9') {
      cnt++;
    } else {
      if (cnt >= n) {
        return true;
      } else {
        cnt = 0;
      }
    }
  }
  return false;
}

int main() {
  string s;
  int k;
  cin >> s >> k;
 s += ' ';
  if (isValid(s, k)) cout << "Valid";
  else cout << "Not valid";
}

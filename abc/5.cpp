#include <bits/stdc++.h>

using namespace std;

  map <char, int> mp;
int main() {
  int n;


  cin >> n;

  set <char> st;
  int copy = n;
  while (n--) {
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++) {
      st.insert(s[i]);
    }
    for (auto i:st) {
      mp[i]++;
    }

    st.clear();
  }


  bool exists = false;
  for (auto x : mp) {
    if (x.second == copy) {
      exists = true;
      cout << x.first << ' ';
    }
  }

  if (!exists) {
    cout << "NO COMMON CHARACTERS";
  }
}
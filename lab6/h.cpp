#include <bits/stdc++.h>

using namespace std;

bool isValid (unsigned long long n) {
  while (n != 0) {
    if ((n % 10) % 2 == 1) {
      return false;
    }
    n /= 10;
  }
  return true;
}

int main() {
  unsigned long long n;
  cin >> n;
  if (isValid(n)) cout << "Valid";
  else cout << "Not valid";
}

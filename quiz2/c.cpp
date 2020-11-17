//wrong answer

#include <iostream>
#include <sstream>
#include <algorithm>
using namespace std;
int main() {
  int a, n, arr[n];
  int maxi = 0;
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> a;
    arr[a - 1]++;
  }
  
  for(int i = 0; i < 1000; i++){
    if(arr[maxi] < arr[i])maxi = i;
  }
  for(int i = 1000; i > 0; i--){
    if(arr[i] == arr[maxi]){
      cout << i + 1 << ' ';
    }
  }
}
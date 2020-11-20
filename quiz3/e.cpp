#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main(){

int n, a;
cin >> n;

set<int> Ayazhan;

for(int i = 0; i < n; i++){
cin >> a;
Ayazhan.insert(a);
}

if (Ayazhan.size()==n) cout << "YES";
else cout << "NO";


return 0;
}
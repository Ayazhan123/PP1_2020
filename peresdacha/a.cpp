#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){

int n;
cin >> n;

int l , r;
cin >> l >> r ;

int a[n];
vector<int> v;

for(int i=1 ; i<=n ; i++){
    cin >> a[i];
    v.push_back(a[i]);
}
reverse(v.begin()+l-1 , v.begin()+r);

for(int i=0 ; i<v.size() ; i++){
    cout << v[i] << " ";
}

    return 0;
}
#include <iostream>
#include <map>
#include <iterator>

using namespace std ;

int main(){

map <int, int> m ;
int n;
cin >> n ;
int a[n];

for (int i=0 ; i<n ; i++){
    cin >> a[i];
    m[a[i]]++ ;
}
map<int, int> ::iterator it ;
int cnt=0 ;

for (it=m.begin() ; it != m.end() ; ++it){
    if ((*it).second >= 2) cnt++ ;
}
cout << cnt ;

    return 0 ;
}
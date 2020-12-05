#include <iostream>
#include <set>

using namespace std;

int main(){

set <int> s;
int x ;
int n ;
cin >> n ;

for (int i=0 ; i< n ; i++){
    cin >> x ;
    s.insert(x);
}
cout << s.size() << endl ;

    return 0 ;
}
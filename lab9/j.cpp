#include <iostream>
#include <map>
#include <iterator>

using namespace std;

int main(){

int n;
cin >> n;
map <string , int> m ;

for (int i=0 ; i<n ; i++){
    string s;
    cin >> s;
    int x;
    cin >> x;
    m[s] += x ;
}

map<string , int>:: iterator it;
for (it=m.begin() ; it != m.end() ; it++){
    cout << it->first << " " << it->second << endl ;
}


    return 0 ;
}
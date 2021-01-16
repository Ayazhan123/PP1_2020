#include <iostream>
#include <map>
#include <vector>
#include <iterator>
#include <string>

using namespace std;

int main(){

int n , x;
map<int , int> m;
vector<int> v;

for(int i=1 ; i<=9 ; i++){
    m.insert(make_pair(i, 0));
}
while(1){
    cin >> x;
    if(x==0) break;
    m[x]++;
}

map<int , int>::iterator it;

for (it=m.begin() ; it!=m.end() ; it++){
    cout << (*it).second <<" " ;
}

    return 0;
}
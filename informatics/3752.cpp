#include <iostream>
#include <set>

using namespace std;

int main(){

set <int> s;
int x;

while(1){
    cin >> x;
    s.insert(x);
    
}

int z;
cin >> z;
if (s.find(z)==s.end()){
    cout << "No";
}else {
    cout << "Yes";
}

    return 0 ;
}
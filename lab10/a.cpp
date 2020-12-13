#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

vector <string> v1 ;
vector <int> v2 ;
int n;
cin >> n;
for(int i=0 ; i<n ; i++){
    string a;
    int b;
    cin >> a >> b ;
    v1.push_back(a);
    v2.push_back(b);
}
sort(v1.begin() , v1.end());
sort(v2.begin() , v2.end());

for(int i=0 ; i<v1.size() ; i++){
    cout << v1[i] <<" "<< v2[i] << endl ;
    }

    return 0 ;
}
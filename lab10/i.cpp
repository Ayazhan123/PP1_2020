#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){

int n;
vector<int> v1;
vector<int> v2 ;

cin >> n;
int x;

for(int i=0 ; i<n ; i++){
    cin >> x;
    v1.push_back(x);
    v2.push_back(x);
}

reverse(v2.begin() , v2.end());

for(int i=0 ; i<v1.size() ; i++){
    if (v1[i]==v2[i]) cout << "OK" << endl;
    else cout <<"Instead of "<< v1[i] << " here was " << v2[i] << endl ;
}

    return 0 ;
}
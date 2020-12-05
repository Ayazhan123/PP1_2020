#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std ;

int main(){

vector <int> even ;
vector <int> odd ;

int n;
int a[n];
cin >> n ;
for(int i=0 ; i<n ; i++){
    cin >> a[i];
}
for (int i=0 ; i<n ; i++){
    if(a[i] % 2 == 0) even.push_back(a[i]);
    else odd.push_back(a[i]);
}
sort(even.rbegin() , even.rend());
sort(odd.begin() , odd.end());

for (int j=0 ; j<even.size() ; j++){
    cout << even[j] << " " ;
}
for (int k=0 ; k<odd.size() ; k++){
    cout << odd[k] << " " ;
}

return 0 ;
}
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

vector <int> v;

int n;
cin>>n;
int a[n];

for(int i=0 ; i<n ; i++){
    cin >> a[i];
    v.push_back(a[i]);
}

int m;
cin >> m;
int b[m];

for(int j=0 ; j<m ; j++){
    cin >> b[j];
    v.push_back(b[j]) ;
}

sort(v.begin(),v.end()) ;

for (int k=0 ; k<v.size() ; k++){
    cout << v[k] << " ";
}

    return 0;
}
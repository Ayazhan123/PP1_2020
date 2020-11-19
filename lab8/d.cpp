#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    int n , l ;
    cin >> n ;
    vector<int> v;
    for (int i=0 ; i<n ; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    cin >> l ;
    v.erase(v.begin()+l , v.begin()+l+1) ;
    for (int i=0 ; i<v.size() ; i++){
        cout << v[i] << " ";
    }
    return 0 ;
}
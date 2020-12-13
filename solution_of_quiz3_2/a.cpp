#include <iostream>
#include <map>

using namespace std;

int main () {
    int n;
    cin >> n;
    map<int, int> mp;
    for(int i = 0; i < n; ++i){
        int temp;
        cin >> temp;
        mp[temp]++;
    }
    int m;
    cin >> m;
    for(int i = 0; i < m; ++i){
        int temp;
        cin >> temp;
        cout << mp[temp] << endl;
    }
    return 0;
}
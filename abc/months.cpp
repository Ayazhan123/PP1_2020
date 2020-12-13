#include <iostream>
#include <map>
using namespace std;
int main(){
    map<string, string> m;
    m["10"] = "October";
    m["11"] = "November";
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        string s, a, b, c;
        cin >> s;
        a = s.substr(0, 2);
        b = s.substr(3, 2);
        c = s.substr(6, 4);
        cout << a << " ";
        if(m.count(b)){
            cout << m[b] << " ";
        }

        cout << c;
    }
        return 0;
}
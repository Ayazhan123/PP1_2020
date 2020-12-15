#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<char> v1;
    vector<char> v2;

    string s1;
    string s2;
    cin >> s1;
    cin >> s2;

    for(int i = 0; i < s1.size(); i++){
        v1.push_back(s1[i]);
    }
    for(int j = 0 ; j < s2.size(); j++){
        v2.push_back(s2[j]);
    }
    
    int x = 0;
    while (v1 != v2)
    {
        x++;
        rotate(v1.rbegin(), v1.rbegin() + 1, v1.rend());
        if (x >= v1.size()){
            cout << "Understandable have a nice day";
            return 0;
        }
    }
    cout << x;

    return 0;
}
#include <iostream>
#include <map>
#include <set>
#include <iterator>

using namespace std;

int main()
{
    int n;
    cin >> n;

    set<pair<string, string>> nicks;

    for (int i=0; i<n; i++) {
        string a, b;
        cin >> a >> b;

        bool found = false;
        set<pair<string, string>>::iterator it1 ;
        for (it1 = nicks.begin(); it1 != nicks.end(); it1++) {
            if (it1->second == a) {
                nicks.insert({it1->first, b});
                nicks.erase(it1);
                found = true;
                break;
            }
        }

        if (!found)
            nicks.insert({a, b});
    }

    cout << nicks.size() << endl;

    set<pair<string, string>>::iterator it2;

    for (it2 = nicks.begin(); it2 != nicks.end(); it2++) {
        cout << it2->first << " "<< it2->second << endl;
    }

    return 0;
}
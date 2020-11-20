#include <iostream>
#include <set>
#include <vector>
#include <string>

using namespace std;

bool isImpostorInVector(string name, vector<string> names) {
    for (int i = 0; i < names.size(); i++) {
        if (names[i] == name) {
            return true;
        }
    }
    return false;
}

int main() {
    int n;
    set<string> names;
    vector<string> impostors;
    string name;
    
    cin >> n;
    while (n--) {
        cin >> name;
        if (names.find(name) != names.end()) {
            if (!isImpostorInVector(name, impostors)) {
                impostors.push_back(name);
            }
        }
        names.insert(name);
    }
    if (impostors.size() == 0) {
        cout << "Understandable, have a great day";
    } else {
        for (int i = 0; i < impostors.size(); i++) {
            cout << impostors[i] << endl;
        }
    }
}
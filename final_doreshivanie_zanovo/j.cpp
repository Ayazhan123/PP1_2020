#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){

string s1 , s2;
cin >> s1 >> s2;

vector <char> v1;
vector <char> v2;

int cnt=0;

for(int i=0 ; i<s1.size() ; i++){
    v1.push_back(s1[i]);
}

for(int i=0 ; i<s2.size() ; i++){
    v2.push_back(s2[i]);
}

while(v1!=v2){
    cnt++;
    rotate(v1.rbegin() , v1.rbegin()+1 , v1.rend());
    if (cnt >= v1.size()){
            cout << "Understandable have a nice day";
            return 0;
        }
}

cout<<cnt;

    return 0;
}
#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool f(string s){
    for(int i=0 ; i<s.size() ; i++){
        if(s[i]==s[s.size()-1] && s[i]>96 && s[i]<123) return true;
    }
    return false;
}
bool f2(string s){
    for(int i=0 ; i<s.size() ; i++){
        if(s[0]=='@' || (s[i]=='@' && s[i+1]=='.')) return false;
    }
    return true;
}

int main(){

string s;
getline(cin , s);

vector<char> v1;
int cnt=0;

for(int i=0 ; i<s.size() ; i++){
    if(s[i]=='.'){
        for(int j=0 ; j<s.substr(0,i).size() ; j++){
            v1.push_back(s.substr(0,i)[j]);
        }
        break;
    }
}
for(int i=0 ; i<v1.size() ; i++){
    if (v1[i]=='@') cnt++;
}

if (cnt==1 && f(s) && f2(s)) cout << "Yes";
else cout << "No";

    return 0;
}

//captainamerica@gmail.com 
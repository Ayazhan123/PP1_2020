//не вышло
#include <iostream>
#include <string>
#include <iterator>
#include <queue>

using namespace std;

int main(){

string s1;
string s2;

cin >> s1;
cin >> s2;

queue<char> q;

for(int i=0 ; i<s1.size() ; i++){
    q.push(s1[i]);
}
for(int j=0 ; j<s2.size() ; j++){
    if (q.back()==s2[j]) {
       q.push(s2[j+1]);
    }
}
//queue<char>::iterator it;
//for (it=q.front() ; it != q.back() ; it++){
  //  cout << *it << " " ;
//}

for (int i=0 ; i<q.size() ; i++){
    cout << q.front() ;
}

    return 0 ;
}
#include <iostream>
#include <string>
#include <map>
#include <iterator>

using namespace std;

int main(){

map <string , double> m ;

m["A+"]=4.00;
m["A"]=3.75;
m["B+"]=3.50;
m["B"]=3.00;
m["C+"]=2.50;
m["C"]=2.00;
m["D+"]=1.50;
m["D"]=1.00;
m["F"]=0.00;

string s;
cin >> s;

map<string, double> :: iterator it;
for(it=m.begin() ; it!=m.end();it++){
    if ((*it).first==s) cout << (*it).second ;
}

    return 0;
}
#include <iostream>
#include <set>
#include <string>
#include <sstream>

using namespace std;

bool check(string n){ 
    set<int> s;

    for(int i = 0; i < n.size(); i++){
        s.insert(n[i]);
    }

    if (s.size()==n.size())
        return true ;
    else
        return false ;

}

string toString(int a){
    stringstream ss;
    ss << a ;

    return ss.str();
}

int main(){
    int a;
    cin >> a;

    do{
         a++ ;
    }while(!check(toString(a)));
    
    cout << toString(a) << endl ;   
   
    return 0 ;
}
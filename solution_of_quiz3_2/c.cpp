#include <iostream>
#include <map>
#include <iterator>

using namespace std;

int main(){

int n;
cin >> n;

for (int i=0 ; i<n ; i++){
    
    char v;
    char a1 , a2;
    int b1 , b2;

    cin >> v;
    cin >> a1 >> b1 >> a2 >> b2 ;

    map <char , int> m;

    if (v=='+'){
        m[v]=b1+b2 ;
    }
    else if (v=='-'){
        m[v]=b1-b2 ;
    }
    else if (v=='*'){
        m[v]=b1*b2 ;
    }

    map<char , int>::iterator it;
    for( it = m.begin() ; it != m.end() ; it++){
        cout << a1 << " "<< (*it).first << " "<< a2 << " = "<< (*it).second << endl ;
    }

}

    return 0 ;
}
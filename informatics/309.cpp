#include <iostream>
using namespace std;

bool Election(bool x , bool y , bool z){

     if (x==true && y==true && z==true) return true ;
     if (x==true && y==true && z==false) return true ;
     if (x==true && y==false && z==true) return true ;
     if (x==false && y==true && z==true) return true ;
return false ;

   
}

int main(){

    int a , b , c;
    cin >> a >> b >> c ;
    cout << (Election(a,b,c) ? "1" : "0") ;

    return 0 ;
}
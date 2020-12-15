#include <iostream>

using namespace std;

int func_dig(int a){
    int x = 0;
    int y = 0;

    while(a != 0){  
        x = 10*x ; 
        y = a%10 ; 
        x = x+y ;  
        a /= 10;  
    }
 return x;
}

int main (){

int n ;
int a , b , c ;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a >> b;
        c = func_dig(a) + func_dig(b);
        cout << func_dig(c) << endl;
    }

  return 0;
}
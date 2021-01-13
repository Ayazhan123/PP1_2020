#include <iostream>

using namespace std;

int func_dig(int a){ //754
    int x = 0;
    int y = 0;

    while(a != 0){  
        x = 10*x ; //0
        y = a%10 ;//4 
        x = x+y ; //4 
        a /= 10;  //75
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
#include <iostream>
using namespace std;
 
void recurtion(int a , int n){
    if (a > n) return ;
    cout << a << " ";
    recurtion(a+1 , n); 
}

int main(){

    int a;
    cin >> a ;
    recurtion(1 , a) ;

    return 0 ;

}
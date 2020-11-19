#include <iostream>
using namespace std;
 
int f(int res , int n){

if (n==0) return res;

return f(res + (n%10)/2 , n/10);
}


int main(){

    int s;
    cin >> s;
    cout << f(0 , s) ;

    return 0 ;

}
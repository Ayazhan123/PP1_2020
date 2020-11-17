#include <iostream>
using namespace std;
int main (){

int n ;

cin >> n ;

n = n % (24 * 60 * 60);

int h = n / 60 / 60 ;

n-=(h * 60 * 60) ;

int m = n / 60 ;

int s = n % 60;

 cout << h <<":"<<m/10 << m%10 <<":"<<s/10 << s%10;
    return 0;
}
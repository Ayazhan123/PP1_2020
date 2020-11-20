#include <iostream>
#include <cmath>
using namespace std;

bool  prime(long n){
    
    bool res=false ;

    for(long i=2 ; i<= sqrt(n) ; i++) 
    if( (n%i)==0) res = true ;
    
    if (res==true || n==1) return false ;
    else return true ;
}

void Ayazhan_function(int n)
{
    int num = 1, cnt = 0;
    while ( 1 ) {
        num++;
        if(prime(num)){
            cnt++;
        }
        if(cnt == n){
            cout << num;
            break;
        }
    }
}
int main() 
{ 
    int x;
    cin >> x;
    Ayazhan_function(x);

    return 0;
}
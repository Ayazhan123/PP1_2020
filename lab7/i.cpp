#include <iostream>
using namespace std;
 
long long Sum(long long ans ){

int n;
cin >> n;
ans+=n ;
    if (n==0) return ans ;
    return Sum(ans);
}

int main(){

cout << Sum(0) ;

    return 0 ;

}
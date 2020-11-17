#include <iostream>
#include <iomanip>
using namespace std;

void read(int a[] , int n) 
{
    for (int i=0 ; i<n ; i++){
        cin >> a[i];
    }
}
void reverse(int a[] , int n)
{
     for (int i=n-1 ; i>=0 ; i--){
         cout << a[i] << " ";
     }
}
int main(){

    int n ;
    cin >> n ;
    int a[n] ;

    read(a,n);
    reverse(a,n);

    return 0 ;

}
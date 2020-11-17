#include <iostream>
using namespace std;
 
void read(int a[] , int n){
    for (int i=0 ; i<n ; i++){
        cin >> a[i];
    }
}
bool search(int a[] , int n , int i , int x){
    if (i>n-1) return false;
    if (a[i]==x) return true;
    return search(a,n,i+1,x); 
}

int main(){

    int n , x;
    cin>> n;
    int a[n];
    read(a,n);
    cin >> x ;
    cout << (search(a,n,0,x) ? "Yes" : "No") ;

    return 0 ;

}
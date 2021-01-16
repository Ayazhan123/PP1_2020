#include <iostream>
using namespace std;
int main(){
    
int n;
cin >> n;

char a[2*n][4*n-1];

for(int i=0 ; i<2*n ; i++){
    for(int j=0 ; j<4*n-1 ; j++){
        if (i+j==2*n-1 || j-i==2*n-1 || (i==n-1 && i+j>2*n-1 && j-i<2*n-1) || (i-j==1 && i+j>2*n-2) || (i+j==4*n-1 && j-i<2*n) || (i==2*n-1 && j!=2*n-1)) cout << "*";    
        else cout << " ";
    }
    cout << endl;
}
    return 0;
}
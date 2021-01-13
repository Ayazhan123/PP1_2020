#include <iostream>

using namespace std;

int main(){

int n;
cin >> n;
char a[n][n];

for(int i=0 ; i<n ; i++){
    for(int j=0 ; j<n ; j++){
        if((i==0 && j==0)||(i==0 && j==n-1)||(i==n-1 && j==0)||(i==n-1 && j==n-1)) cout << "y" << " ";
        else if (j==0 || i==0 || j==n-1 || i==n-1) cout << "x" << " ";
        else cout << " " << " ";
    }
    cout << endl;
}

    return 0;
}
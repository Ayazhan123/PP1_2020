#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n , m;
    cin >> n >> m ;
    int a[n][m];

    for (int i=0 ; i<n ; i++){
        for (int j=0 ; j<m ; j++){
            a[0][j]=0;
            a[i][0]=0;
        }
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
                a[i][j]=i*j;       
        }
    }  
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}